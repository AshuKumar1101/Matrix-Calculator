#include<iostream>
using namespace std;

int sum(){
    int row, column,i,j;
    float firstMatrix[10][10], secondMatrix[10][10], ResultMatrix[10][10];
    cout<<"Enter the no. of rows: ";
    std::cin>>row;
    cout<<"Enter the number of column: ";
    std::cin>>column;
    cout<<"Enter the element in the first Matrix: "<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            std::cin>>firstMatrix[i][j];
        }
        
    }
    cout<<"Enter the element in the Second Matrix: "<<endl;
       for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            std::cin>>secondMatrix[i][j];
        }
        
    } 
    cout<<"Sum of Entered Matrix: "<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            ResultMatrix[i][j]=firstMatrix[i][j]+secondMatrix[i][j];
            cout<<ResultMatrix[i][j]<<" ";
        }
        cout<<endl;
        
    }
    
}
int Difference(){
    int row, column,i,j;
    float firstMatrix[10][10], secondMatrix[10][10], ResultMatrix[10][10];
    cout<<"Enter the no. of rows: ";
    std::cin>>row;
    cout<<"Enter the number of column: ";
    std::cin>>column;
    cout<<"Enter the element in the first Matrix: "<<endl;
    for (i = 0; i < row; i++)
    {
        for ( j = 0; j < column; j++)
        {
            std::cin>>firstMatrix[i][j];
        }
        
    }
    cout<<"Enter the element in the Second Matrix: "<<endl;
       for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            std::cin>>secondMatrix[i][j];
        }
        
    } 
    cout<<"Difference of Entered Matrix: "<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if(firstMatrix[i]>secondMatrix[i]||firstMatrix[j]>secondMatrix[j]){
            ResultMatrix[i][j]=firstMatrix[i][j]-secondMatrix[i][j];
            cout<<ResultMatrix[i][j]<<" ";
            }
            else
            {
            ResultMatrix[i][j]=secondMatrix[i][j]-firstMatrix[i][j];
            cout<<"-"<< ResultMatrix[i][j]<<" ";  
            }
            

        }
        cout<<endl;
        
    }
    
}
int Multiply(){
    int row, column,i,j;
    float firstMatrix[10][10], secondMatrix[10][10], ResultMatrix[10][10];
    cout<<"Enter the no. of rows: ";
    std::cin>>row;
    cout<<"Enter the number of column: ";
    std::cin>>column;
    cout<<"Enter the element in the first Matrix: "<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            std::cin>>firstMatrix[i][j];
        }
        
    }
    cout<<"Enter the element in the Second Matrix: "<<endl;
       for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            std::cin>>secondMatrix[i][j];
        }
        
    } 
    cout<<"Multiply of Entered Matrix: "<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            ResultMatrix[i][j]=0;
            for (int k = 0; k < column; k++)
            {
                 ResultMatrix[i][j]+=firstMatrix[i][k]*secondMatrix[k][j];
            }
            
        }
       
        
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout<<ResultMatrix[i][j]<<" ";
        }
        cout<<"\n";
        
    }
    
}

int main(){
    
    char ch;
  
    do
    {
        system("cls");
        cout << "\n\n\n\tMAIN MENU" <<endl;
        cout << "\n\n\t01. SUM OF MATRICES"<<endl;
        cout << "\n\n\t02. DIFFERENCE OF MATRICES"<<endl;
        cout << "\n\n\t03. MULTIPLICATION OF MATRICES"<<endl;
        cout << "\n\n\t04. EXIT"<<endl;
        cout << "\n\n\tSelect Your Option (1-4)";
        std::cin >> ch;
        system("cls");
       switch (ch)
       {
       case '1':
           sum();
           break;
       case '2':
           Difference();
           break;
       case '3':
           Multiply();
           break;
       case '4':
           cout<<"Thankyou for using Matrix CXalculator...";
           break;
       default:
           break;
       }
       std::cin.ignore();
       std::cin.get();
    } while (ch != '4');
    return 0;
}