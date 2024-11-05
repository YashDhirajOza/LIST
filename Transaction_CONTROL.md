# Transactions 
Transaction group a set of tasks into a single execution unit 
Each Transaction begins with a specific job and ends when all the 
tasks in the group successfully completed 
If any of the tasks fail, the transaction Fails 
Transaction only has two output : Success or Failure 
Every Trasaction follows ACID properties 

A= Atomicity : Means every transcation can be either be success or failure 
This is followed because it helps in keeping  database's intergrity 
IF during transaction any part fails then all the transaciton are rolled back 

C= Consistency : Transactino maintain intergirty retrictions by moving the databse frrom one valid state to another
I= Isolation : Concurrent transation are isolate frrom one another assuring the accuracy of the data 
D= Durability: Once Trasaction is committed , its modification remain in effects even in event of a system failure 
---------------------------------------------------------------
# controls 
BEGIN 

it indicate the start of transaction  

BEGIN TRANSACTION transaction_name ; 

SET 

SET TRANSACTION[READ_ONLY ][Read WRITE]

ROLBACK 

COMMIT
