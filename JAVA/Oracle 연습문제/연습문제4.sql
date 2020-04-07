create table Dongari(
    id char(4) primary key,
    name varchar(20) not null
);

create table student(
    id char(10) primary key,
    name varchar(20) not null,
    department varchar(30) not null,
    address varchar(50) not null
);

create table dongarijoin(
    no char(4) primary key,
    s_id char(10) not null,
    d_id char(4),
    CONSTRAINT fk_student FOREIGN key (s_id) references student (id)
);

insert into dongari values('0001','수학동아리');
insert into dongari values('0002','게임동아리');
insert into dongari values('0003','과학동아리');
insert into dongari values('0004','은월동아리');

insert into student values('20160001','홍길동','컴퓨터공학과','서울시 영등포구');
insert into student values('20162233','이순신','멀티미디어학과','부산시 남구');
insert into student values('20161177','왕건','멀티미디어학과','강원도 삼척시');

insert into dongarijoin values('0001','20160001','0001');
insert into dongarijoin values('0002','20160001','0002');
insert into dongarijoin values('0003','20160001','0003');
insert into dongarijoin values('0004','20162233','0002');
insert into dongarijoin values('0005','20161177',null);


SELECT
    *
FROM dongarijoin;
select d.name, s.name, dj.s_id
from dongari d, student s, dongarijoin dj
where d.id = dj.d_id and s.id = dj.s_id;

select *
from  student s
where (select s_id from dongarijoin where d_id is null) in (id);

select name
from dongari
minus select name from dongari where id in
(select d_id from dongarijoin);
------------

create table book(
    bid varchar(10) primary key,
    title varchar(20) not null
);

insert into book values('0001', '자바');
insert into book values('0002', 'Oracle');
insert into book values('0003', 'HTML');
insert into book values('0004', 'JSP');

create table bookrent(
    no number primary key,-- 대출번호
    id char(10),-- 학번
    bid varchar(10), -- 책번호
    rdate date,-- 대출일
    CONSTRAINT fk_student1 FOREIGN key (id) references student (id),
    CONSTRAINT fk_book FOREIGN key (bid) references book (bid)
);

insert into bookrent values(1, '20160001', '0001', '2016-12-01');
insert into bookrent values(2, '20162233', '0002', '2016-12-02');

select s.id,s.name,b.title, br.rdate
from student s, book b, bookrent br
where s.id = br.id and b.bid = br.bid;

select title
from book 
minus 
select title from book where bid in
(select bid from bookrent);