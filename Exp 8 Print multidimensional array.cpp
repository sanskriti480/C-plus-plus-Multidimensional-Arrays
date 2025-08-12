//Sanskriti Khairnar
//PRN-24070123054
//Batch-A2
//Experiment 8

#include <iostream>
#include<cstdio>
using namespace std;

int main(){
    //Defining a Multi Dimensional Array
    int m,n;
    cout<<"Enter number of rows and columns :"<<endl;
    cin>>m;
    cin>>n;
    int array[m][n];
    
    for(int i = 0; i < m ; i++){
        for(int j = 0; j < n; j++){
            printf("Enter the element[%d][%d] :\n",i,j);
            cin>>array[i][j];
        }
    }
    
    for(int i = 0; i < m; i++){
        for(int j = 0; j<n; j++){
            cout<<array[i][j]<<"\t";
        }
        cout<<endl;
    }
    
    
    return 0;
}

//Outputs

/*Enter number of rows and columns :
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
*/

