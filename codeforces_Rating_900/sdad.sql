CREATE TABLE Student1(
student_id int,
first_name varchar2(10) NOT NULL,
last_name varchar2(10) NOT NULL,
dept varchar2(10) NOT NULL,
date_of_birth varchar2(10) NOT NULL,
gender varchar2(10) NOT NULL,
religion varchar2(10) NOT NULL
);
CREATE TABLE Employee1(
employee_id int NOT NULL,
full_name varchar2(20) NOT NULL,
dept varchar2(20) NOT NULL,
salary int NOT NULL
);
CREATE TABLE Product1(
product_id int NOT NULL,
product_name varchar2(20) NOT NULL,
product_price int NOT NULL,
product_type varchar2(10) NOT NULL
);
CREATE TABLE Customer1(
customer_id int NOT NULL,
full_name varchar2(20) NOT NULL,
customer_type varchar2(20) NOT NULL,
avg_spending int NOT NULL
);
CREATE TABLE Account1(
account_id int NOT NULL,
full_name varchar2(20) NOT NULL,
balance int NOT NULL,
account_type varchar2(20) NOT NULL
);