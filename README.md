# C++ Experiment 8: To study and implement C++ 2D Array – Matrices

---

## Aim  
To:  
1. Understand and implement multidimensional arrays in C++.  
2. Perform operations such as input, display, addition, multiplication, transpose, and diagonal sum of matrices.  
3. Explore the application of matrices in computational and real-world scenarios.

---

## Tool Used  
VS Code or Programiz online C++ compiler.

---

## Objectives  
- Learn declaration & usage of multidimensional arrays.
- Process user input for 2D arrays.
- Implement mathematical matrix operations.
- Validate conditions like matrix order compatibility.
- Simulate real-life matrix applications in C++.
  
---

## Theory

### Why C++ is More Efficient than C
C++ supports Object-Oriented Programming (OOP), which improves code reusability and maintainability.

Built-in string class makes string manipulation easier than C-style strings.

Rich Standard Template Library (STL) reduces coding time.

Better type safety compared to C.

Function overloading and templates provide flexibility.

Memory management tools like RAII help prevent leaks.

Direct support for function overloading and inline functions improves efficiency.

### What are Multidimensional Arrays?  
A multidimensional array is an array of arrays. The most common form is the 2D array, used to represent matrices or tables with rows and columns.

**Syntax:**  
```cpp
datatype arrayName[rows][columns];
```

### Accessing Elements  
Elements are accessed using two indices:  
```cpp
array[i][j]; // i = row index, j = column index
```

---

### Structure and Memory Representation of 2D Arrays  
2D arrays in C++ are stored in **row-major order**, where rows are stored one after the other in memory.

For example, the array `int a[2][3]` is stored internally as:
```
a[0][0], a[0][1], a[0][2], a[1][0], a[1][1], a[1][2]
```
This knowledge helps optimize access speed and pass arrays efficiently to functions.

---

### Difference Between 1D and 2D Arrays  

| Feature             | 1D Array        | 2D Array                |
|---------------------|------------------|--------------------------|
| Representation      | Linear           | Matrix/Table             |
| Syntax              | `a[5]`           | `a[3][4]`                |
| Memory Access       | Single index     | Nested indexing          |
| Applications        | Linear data      | Grids, image pixels, etc |

---

### Types of Matrix Operations  

#### 1. **Matrix Addition**  
Performed element-wise:  
```cpp
C[i][j] = A[i][j] + B[i][j];
```
Condition: Number of rows and columns must be the same in both matrices.

#### 2. **Matrix Multiplication**  
Each element in the result is a dot product of row and column:  
```cpp
C[i][j] = A[i][0] × B[0][j] + A[i][1] × B[1][j] + ... ;
```
Condition: Number of columns in first matrix must equal number of rows in second matrix.

#### 3. **Matrix Transpose**  
Swapping rows and columns:  
```cpp
C[i][j] = A[j][i];
```

#### 4. **Diagonal Sum**  
- **Principal Diagonal**: Elements where row index = column index → `A[i][i]`
- **Secondary Diagonal**: Elements where `i + j = n - 1` → `A[i][n-1-i]` (only for square matrices)

---

### Common Errors and Limitations  

- Accessing out-of-bound indices leads to **undefined behavior**.
- Performing addition or multiplication on **incompatible matrix sizes**.
- Forgetting to initialize all elements before accessing them.
- Using large matrix sizes without `dynamic allocation` can lead to **stack overflow**.
- Assuming diagonals in non-square matrices (which do not have well-defined diagonals).

---

### Edge Cases  

- **Non-square matrix**: Does **not** have a principal or secondary diagonal.
- **1×1 matrix**: Principal and secondary diagonals are the same.
- **Zero-sized matrix**: No operations can be performed.
- **Matrices with one row or one column**: Limited diagonal and multiplication applicability.



---

## Program Descriptions

### 1. Matrix Addition Program  
- Accepts two matrices `matrix1` and `matrix2` of size `m1 × n1` and `m2 × n2`.  
- Validates if the matrices are of the same size.  
- Takes input for each element of both matrices.  
- Displays both matrices after input.  
- Performs element-wise addition and stores in a third matrix `sum`.  
- Prints the resulting matrix of the addition.

---

### 2. Diagonal Sum of a Square Matrix  
- Accepts a square matrix of size `m × m` (user enters one dimension only).  
- Validates that diagonal logic is applied only to square matrices.  
- Takes input for each element.  
- Displays the original matrix.  
- Calculates the sum of:  
  - Primary diagonal (from top-left to bottom-right).  
  - Secondary diagonal (from top-right to bottom-left).  
- Displays the individual sums of both diagonals.

---

### 3. Matrix Multiplication Program  
- Accepts two matrices `matrix1` (`m1 × n1`) and `matrix2` (`m2 × n2`).  
- Checks if multiplication is possible (only if `n1 == m2`).  
- Takes element-wise input for both matrices.  
- Displays the matrices.  
- Computes matrix multiplication using nested loops and stores in `Prod[m1][n2]`.  
- Prints the final matrix result after multiplication.  

---

### 4. Matrix Input and Display Program  
- Takes user-defined dimensions for a matrix `m × n`.  
- Accepts all elements of the matrix from the user.  
- Displays the matrix in tabular format.  
- Demonstrates basic input and output handling of 2D arrays.

---

### 5. Transpose of a Matrix  
- Accepts a matrix `matrix[m][n]`.  
- Takes input for all elements.  
- Displays the original matrix.  
- Computes and displays the transpose of the matrix by switching rows and columns.  
- The transposed matrix is `matrix[j][i]`.

---

## Concepts Used  
- 2D array declaration.
- Nested loops.
- Element-wise operations.
- Conditional checks.
- Dot product logic.
- Index-based diagonal detection.
- Row-column swapping for transpose.

---

## Sample output

Program 1
```
Enter number of rows and columns :
2
2
Enter number of rows and columns :
2
2
Enter the element of Matrix1[0][0] :
1
Enter the element of Matrix1[0][1] :
2
Enter the element of Matrix1[1][0] :
3
Enter the element of Matrix1[1][1] :
4
Enter the element of Matrix2[0][0] :
4
Enter the element of Matrix2[0][1] :
3
Enter the element of Matrix2[1][0] :
2
Enter the element of Matrix2[1][1] :
1
Matrix 1
1	2	
3	4	
Matrix 2
4	3	
2	1	
Sum
5	5	
5	5
```

Program 2
```
Enter number for rows and columns (diagonal exists only for square matrix) :
3
Enter the element of Matrix1[0][0] :
1
Enter the element of Matrix1[0][1] :
2
Enter the element of Matrix1[0][2] :
3
Enter the element of Matrix1[1][0] :
4
Enter the element of Matrix1[1][1] :
5
Enter the element of Matrix1[1][2] :
6
Enter the element of Matrix1[2][0] :
7
Enter the element of Matrix1[2][1] :
8
Enter the element of Matrix1[2][2] :
9
Matrix 1
1	2	3	
4	5	6	
7	8	9	
Diagonal 1 Sum :15
Diagonal 2 Sum :15
```

Program 3
```
Enter number of rows and columns :
2
2
Enter the element of Matrix1[0][0] :
1
Enter the element of Matrix1[0][1] :
2
Enter the element of Matrix1[1][0] :
3
Enter the element of Matrix1[1][1] :
4
Enter the element of Matrix2[0][0] :
4
Enter the element of Matrix2[0][1] :
3
Enter the element of Matrix2[1][0] :
2
Enter the element of Matrix2[1][1] :
1
Matrix 1
1	2	
3	4	
Matrix 2
4	3	
2	1	
Multiplication
8	5	
20	13
```

Program 4
```
Enter number of rows and columns :
2
2
Enter the element[0][0] :
2
Enter the element[0][1] :
4
Enter the element[1][0] :
6
Enter the element[1][1] :
8
2	4	
6	8
```

Program 5
```
Enter number of rows and columns :
3
3
Enter the element of Matrix1[0][0] :
1
Enter the element of Matrix1[0][1] :
2
Enter the element of Matrix1[0][2] :
3
Enter the element of Matrix1[1][0] :
4
Enter the element of Matrix1[1][1] :
5
Enter the element of Matrix1[1][2] :
6
Enter the element of Matrix1[2][0] :
7
Enter the element of Matrix1[2][1] :
8
Enter the element of Matrix1[2][2] :
9
Matrix 1
1	2	3	
4	5	6	
7	8	9	
Transpose
1	4	7	
2	5	8	
3	6	9
```

---

## Conclusion

Successfully implemented matrix operations using arrays in C++.

Learned to use nested loops for traversing and manipulating two-dimensional data structures.

Understood how C++ arrays can store tabular/matrix-like data efficiently.

Strengthened logic-building skills for handling row-column based computations in programs.

---
