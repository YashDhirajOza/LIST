Grant and Revoke are the part of DCL language of SQL 
DCL helps in controling the data from database 
Grant and Revoke belong to these types of  command 

--------------------------------------

# Grant 
Grant command specifically used to provide privileges to database 
objects from a user 
This command also allows users to grant permission to other users too 
--------------------------
Sytax=
grant privilage_name on object_name 
to { user_name | public | role_name } 
---------------------------

grant insert , 
select on accounts to Ram
------------------------------
Revoke:
Revoke command withdraw user provilages on daabser objects if 
any granted 
IT is opposite of GRANT command 
----------------------
revoke insert, 
select on accounts from Ram 






