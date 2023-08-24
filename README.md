A matrix is a two-dimensional data object made of m rows and n columns, therefore having total m x n values. If most of the elements of the matrix have 0 value, then it is called a sparse matrix.

Why to use Sparse Matrix instead of simple matrix ?

Storage: There are lesser non-zero elements than zeros and thus lesser memory can be used to store only those elements.
Computing time: Computing time can be saved by logically designing a data structure traversing only non-zero elements..
Example: 

0 0 3 0 4            
0 0 5 7 0
0 0 0 0 0
0 2 6 0 0
Representing a sparse matrix by a 2D array leads to wastage of lots of memory as zeroes in the matrix are of no use in most of the cases. So, instead of storing zeroes with non-zero elements, we only store non-zero elements. This means storing non-zero elements with triples- (Row, Column, value). 


Sparse Matrix Representations can be done in many ways following are two common representations: 

Array representation
Linked list representation
Method 1: Using Arrays:

2D array is used to represent a sparse matrix in which there are three rows named as 

Row: Index of row, where non-zero element is located
Column: Index of column, where non-zero element is located
Value: Value of the non zero element located at index – (row,column)
Sparse Matrix Array Representation
![image](https://github.com/230Souvik/Sparce_Matrix/assets/135532224/0015bf21-f2f4-4818-bfda-f82b7c9af733)
