create table Worker(
  w_id int primary key,
  w_name varchar(20) not null,
  department varchar(20) not null,
  salary int not null,
  doj datetime not null
);

insert into Worker(w_id,w_name,department,salary,doj) 
values(1,'Anil', 'Accounts',10000,01-01-2020)
,(2,'Anu', 'Admin',11000,01-10-2020)
,(3,'Anil Kumar', 'HR',5000,03-11-2020)
,(4,'Anuradh', 'Marketing',12000,01-01-2020)
,(5,'Anuradh Kumar', 'Establishment',9000,11-12-2021)
,(6,'Anoop', 'Finance',10000,01-01-1998)
,(7,'Adarsh', 'Security',7000,01-01-2008)

update Worker set w_name = "Anil Prasad" where w_id = 3;

select * from Worker;

select * from Worker where salary = (select max(salary) from Worker);

select * from Worker where salary = (select min(salary) from Worker);

select * from Worker where salary =(select min(doj) from Worker);

select top 2 salary from Worker order by salary desc;

select * from Worker where doj = (select min(doj) from Worker);

select * from Worker where doj = (select max(doj) from Worker);
GO