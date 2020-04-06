create table student(
    id varchar(10) not null,
    name varchar(20) not null,
    department varchar(30) not null,
    address varchar(50) not null
);

insert into student values('20160001','ȫ�浿','��ǻ�Ͱ��а�','����� ��������');
insert into student values('20162233','�̼���','��Ƽ�̵���а�','�λ�� ����');
insert into student values('20161177','�հ�','��Ƽ�̵���а�','������ ��ô��');

select 'id : ' || id || ', name : ' || name || ', department : '|| department as st_data
from student;

select * from student where department = '��ǻ�Ͱ��а�';

select * from student where address = '����� ��������';

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
    when '��Ƽ�̵���а�' then 'O'
    else 'X'
    end as student_MultiMedia
from student;