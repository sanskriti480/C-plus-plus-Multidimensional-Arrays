//Sanskriti Khairnar
//PRN-24070123054
//Batch-A2
//Experiment 8

#include <iostream>
#include<cstdio>
using namespace std;

int main(){
    //Defining a Multi Dimensional Array
    int m;
    cout<<"Enter number for rows and columns (diagonal exists only for square matrix) :"<<endl;
    cin>>m;
    int matrix[m][m];
    
        // User Input
    for(int i = 0; i < m ; i++){
        for(int j = 0; j < m ; j++){
            printf("Enter the element of Matrix1[%d][%d] :\n",i,j);
            cin>>matrix[i][j];
        }
    }
    // Printing Matrix
    cout<<"Matrix 1"<<endl;
    for(int i = 0; i < m ; i++){
        for(int j = 0; j < m ; j++){
            cout<<matrix[i][j]<<"\t";
        }
        cout<<endl;
    }
    // Diagonal 1
    int diag1_sum = 0;
    for(int i = 0; i < m ; i++){
        for(int j = 0; j < m ; j++){
            if(i == j){
                diag1_sum += matrix[i][j];
            }
        }
    }
    cout<<"Diagonal 1 Sum :"<<diag1_sum<<endl;
    
    // Diagonal 2
    int diag2_sum = 0;
    for(int i = 0; i < m ; i++){
        for(int j = 0; j < m ; j++){
            if(j == m - 1 - i){
                diag2_sum += matrix[i][j];
            }
        }
    }
    cout<<"Diagonal 2 Sum :"<<diag2_sum<<endl;
    return 0;
}

//Output

/*Enter number for rows and columns (diagonal exists only for square matrix) :
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
*/

