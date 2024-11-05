A Stored Procedure in SQL in a group of SQL Quires that can be saved and reused 
multiple times 
It is very usefull as it reduces the need for rewriting SQL quires 
IT helps in effciency , reusability and security 

Stored Procedues are created to perform one or more DML operations on the Database 

IT is nothing but a group of SQL statements that accepts some input in the form of parameters , perform some task 
and may ot may not return a value 

_________________________________________________
DEM0 Syntax:
CREATE PROCEDURE _name_ (parameter1 data_type, parameter2 data_type)
AS 
BEGIN 
--- Required SQL statements 
END 
------------------------------------
EXEC _name_ parameter1 data

There are two type of parameterst 
BEGIN : - executable part 
END :- Up to this part the code will get executed 

-------------------------------------------------------------

CREATE PROCEDURE GetCustomersByCountry
    @Country VARCHAR(50)
AS
BEGIN
    SELECT CustomerName, ContactName
    FROM Customers
    WHERE Country = @Country;
END;

-- Execute the stored procedure with parameter "Sri lanka"
EXEC GetCustomersByCountry @Country = 'Sri lanka';
----------------------------------------------
A Stored procedure is prepared SQL code that you can save so the code 
can bereused over and over again 

Stored procedures allow for code that is used repeatedly to be save 
on the database and run from ther rather than from the client 

since stored procedures are compiled and stored in the database 
They are highly efficient 
SQL SERVER compiled eac stored produres one and then reutilizes the execution plan 
This lead to remendous performance boosts when stored procedured are called repeatedly 

Stored procedures provide better seciruty to you data 
Users can execure a stored procedure withouot havig any permission 
to execute many statements 

-------------------------------------
# Stored Fucntion 
CREATE FUCNTIon statement is used for creating a stored fucntion and user
-defined fucntion 

A stored fucntion is a set of SQL statemetns that perform some operation and 
return a single value 

------------------------------------------------
CREATE FUNCTION function_name(func_parameter1, func_parameter2, ..)
          RETURN datatype [characteristics]
          func_body
-------------------------------------------------


emp_id	fname	lname	start_date
1	Michael	Smith	2001-06-22
2	Susan	Barker	2002-09-12
3	Robert	Tvler	2000-02-09
4	Susan	Hawthorne	2002-04-24
-----------------------------------
CREATE FUNCTION no_of_years(date1 date) RETURNS int
DETERMINISTIC
BEGIN
 DECLARE date2 DATE;
  Select current_date()into date2;
  RETURN year(date2)-year(date1);
END 








