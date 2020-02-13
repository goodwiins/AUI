# Introduction
Arrays: 
  * Static structures : cennot be extended or reduced to  fit a data set 
  * Expensive to maintain new insertions and deletions
Linked lists that addresses some of the limitation of arrays.

##Definition:
  A linked list is a linear data structure where each elment is a separete object.
  ![Screen Shot 2020-02-13 at 1.45.24 PM.png](quiver-image-url/A86B37C75ABEC6B662CD21B51E5DEC3A.png)
  * Each elment (Called a node) of a list is comprising of two items- the data and a refrence to the next node. The last node has a refrence to null. TThe entry point into a linked list is called the head of the list. It should be noted that head is not a separate node, but the reference to the first node. If the list is empty then the head is a null reference.
  * A linked list is a dynamic data structure. The number of nodes in a list is not fixed and can grow and shrink on demand. Any application which has to deal with an unknown number of objects will need to use a linked list.
  * One disadvantage of a linked list against an array is that it does not allow direct access to the individual elements. If you want to access a particular item then you have to start at the head and follow the references until you get to that item.
  * Another disadvantage is that a linked list uses more memory compare with an array - we extra 4 bytes (on 32-bit CPU) to store a reference to the next node.

##Types of Linked Lists
1. A **singly linked list** is described above
2. A **doubly linked list** is a list that has two references, one to the next node and another to previous node.

