create table member2(
    m_id varchar(4) primary key,
    name varchar(6) not null,
    gender varchar(1),
    j_date date
);

insert into member2 values('hkd','È«±æµ¿','m','2001-01-01');
insert into member2 values('lss','ÀÌ¼ø½Å','m','2003-02-01');
insert into member2 values('hj','È²ÁøÀÌ','f','2002-11-13');
insert into member2 values('wg','¿Õ°Ç','m','2005-12-21');
insert into member2 values('pms','¹Ú¹®¼ö','m','2006-11-09');

create table goods(
    g_id number primary key,
    name varchar(6) not null,
    price number
);
insert into goods values(1,'mp3',10000);
insert into goods values(2,'camera',50000);
insert into goods values(3,'pc',700000);

create table orders(
    o_id number primary key,
    m_id varchar(4) not null,
    g_date date
);

insert into  orders values(1,'hkd','2001-03-27');
insert into orders values(2,'wg','2005-04-17');
insert into orders values(3,'hkd','2006-02-07');

create table ordersDetail(
    id varchar(4) primary key,
    o_id number,
    g_id number,
    quantity number
);

insert into ordersDetail values(1,1,1,1);
insert into ordersDetail values(2,1,3,1);
insert into ordersDetail values(3,2,2,2);
insert into ordersDetail values(4,3,2,1);

select count(*) from member2;

select gender,count(*) from member2 group by gender;

select g.name, od.quantity from ordersDetail od join goods g
on od.g_id = g.g_id
where od.quantity in (select max(quantity) from ordersdetail);


select g.name, max(od.quantity) from ordersDetail od join goods g on od.g_id = g.g_id group by g.name;



select m.name, g.name, od.quantity
from member2 m, goods g, orders o, ordersdetail od
where (m.m_id= o.m_id) and (od.g_id = g.g_id) and o.o_id = od.o_id;

select * from member2 where name like 'È«%';

select to_char(o.g_date,'yyyy'), g.name ,sum(od.quantity) total
from goods g, orders o, ordersdetail od
where o.o_id = od.o_id and g.g_id = od.g_id
group by cube(to_char(o.g_date,'yyyy'),g.name);