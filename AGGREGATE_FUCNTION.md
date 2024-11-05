# AGGREGATE FUCNTION 
SQL aggregate fucntion are function where the values of multiple rows are grouped  as input on certain criteria  to form single  value result 
    A+B+C+D= E 
Aggregate Fucntion are mostly used with the GROUP BY caluse of the SELECT statement 

ex 
COUNT()
SUM()
Avg()
MIN()
Max()

SYNTAX:

Count(salary); Returns The total number of records that is 6

SUM(salary)  Returns all non-Null of Column salary

AVG(salary)  Return average of the column named salary 

Min(salary) Retuen min frrom salary column 

Max(salary) return max from salary column 

SELECT SUM(Salary) AS TotalSalary FROM Employee

-- Find the Avergae salary frrom tabled named employee 

SELECT AVG(salary) AS Avgsal FROM Employee 

