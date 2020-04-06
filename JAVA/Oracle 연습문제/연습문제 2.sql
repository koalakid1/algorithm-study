create table student(
    id varchar(10) not null,
    name varchar(20) not null,
    department varchar(30) not null,
    address varchar(50) not null
);

insert into student values('20160001','홍길동','컴퓨터공학과','서울시 영등포구');
insert into student values('20162233','이순신','멀티미디어학과','부산시 남구');
insert into student values('20161177','왕건','멀티미디어학과','강원도 삼척시');

select 'id : ' || id || ', name : ' || name || ', department : '|| department as st_data
from student;

select * from student where department = '컴퓨터공학과';

select * from student where address = '서울시 영등포구';

SELECT
    *
FROM student
order by id asc;

SELECT
    *
FROM student
order by name desc;

SELECT
    *
FROM student
order by department asc, id asc;

select NAME ,
    case department
    when '멀티미디어학과' then 'O'
    else 'X'
    end as student_MultiMedia
from student;