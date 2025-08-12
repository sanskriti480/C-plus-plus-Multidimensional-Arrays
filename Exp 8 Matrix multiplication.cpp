//Sanskriti Khairnar
//PRN-24070123054
//Batch-A2
//Experiment 8

#include <iostream>
#include<cstdio>
using namespace std;

int main(){
    //Defining a Multi Dimensional Array
    int m1,n1;
    cout<<"Enter number of rows and columns :"<<endl;
    cin>>m1;
    cin>>n1;
    int matrix1[m1][n1];
    
    int m2,n2;
    cout<<"Enter number of rows and columns :"<<endl;
    cin>>m2;
    cin>>n2;
    int matrix2[m2][n2];
    
    // Condition Check
    if(n1 != m2){
        cout<<"Invalid";
        exit(0);
    }
    else{    
        // User Input
    for(int i = 0; i < m1 ; i++){
        for(int j = 0; j < n1 ; j++){
            printf("Enter the element of Matrix1[%d][%d] :\n",i,j);
            cin>>matrix1[i][j];
        }
    }
    
    for(int i = 0; i < m2 ; i++){
        for(int j = 0; j < n2; j++){
            printf("Enter the element of Matrix2[%d][%d] :\n",i,j);
            cin>>matrix2[i][j];
        }
    }
    // Printing Matrix
    cout<<"Matrix 1"<<endl;
    for(int i = 0; i < m1; i++){
        for(int j = 0; j<n1; j++){
            cout<<matrix1[i][j]<<"\t";
        }
        cout<<endl;
    }
    
    cout<<"Matrix 2"<< endl;
    for(int i = 0; i < m2; i++){
        for(int j = 0; j<n2; j++){
            cout<<matrix2[i][j]<<"\t";
        }
        cout<<endl;
    }
    int Prod[m1][n2];
    cout<<"Multiplication"<<endl;
    for(int i = 0; i < m1; i++){
        for(int j = 0; j<n2; j++){
            Prod[i][j] = 0;
            for(int k = 0 ; k < n1 ; k++){
            Prod[i][j] += matrix1[i][k] * matrix2[k][j];
            }
            cout<<Prod[i][j]<<"\t";
        }
        cout<<endl;
    }
}
    
    return 0;
}

//Output

/*Enter number of rows and columns :
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
*/

