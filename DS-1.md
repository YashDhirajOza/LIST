# Data Structures #

 ## What is Abstract Data Type ?##
  Answer:- Abstract data types are mathematical models for data types, where data is defined by its behaviour rather than by its implementation. In ADT's 
  the focus is on what operations can be performend rather than how they are performed 
   ## ADT consists of two main parts:##
   Operations: The set of operations that can be applied to the data 
   Values:-  the set of values that the data type can hold 
   Encapsulation: The internal implementation of the data type is hidden from the user 
   Abstraction: The user interacts with the data type through a defiend interface without needing to understand to under lying details

  Example: A stack supports operations like push , pop and peek but doesn't specify whether it is implemented using an array or a linked list 

  They Help in designing algorithm and systems by focusing on what a data structure should do rather than how it does it , improving  both clarity and maintainbility in software development 


  #  Binary Tree#
  A Full binray tree is a type of binary tree in whih every node has either 0 or 2 children . This means that no node in a full binary tree has only one child ; each internal node must have exactly two children, 
  and all leaves are at the same or different levels
 ## Characteristics of a Full Binary Tree:##

  !. Every internal node has exactly  two children 

  2. All leaves are at the lowest level of the tree

  3. The total number of nodes , n , in a full binary tree of height h is given by a formula

  4. A full binary tree is not necerssarlit a balanced tree , where all leaves are at the same level however, it can still be efficient for certain ttypes of recurive operations due to its regulate strucute
        1
       / \
      2   3
     / \ / \
    4  5 6  7

  Efficient tree traversal:- The well defined structure of full binary trees make them useful for algorithms that reply on effienct tree traversal 
  Use in Heaps and Binary Search Tree: Many tree based on data structure such as heaps and some types o bonary search three as build as fill binary tree to maintain balance and ecnsure optimal performance for insertion, deletion and search operations 

  Memory and Space Optimizations

  Applications in Network Design and parallel Computing: Full Binary Tree are frequently used to model hiearchical relationships in network design and parallel commputing , where each node can represent a task pt a process with dependescies on two sub tasks 

##(15 Marks) Explain the process of insertion and deletion in a Doubly Linked List. Provide C code examples to demonstrate how nodes are inserted and deleted.##



  
  
   
