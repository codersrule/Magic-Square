/*
This is a Magic Square game. Sum of each row, column and diagonal must add up to the same number.
There must be no number repetition, no negative number, and each grid must lie btn 1-9
*/

#include<iostream>
#include<stdlib.h>
using namespace std;

const int row = 3;
const int col = 3;

//void magicSquare (int [][col], int);
//draw function
void draw(int grid[][col], char user_input, int row, int row_number, int col_number){
   
    grid[row_number-1][col_number-1] = user_input;

for (int i=0; i<row; i++){
        cout<<"------------"<<endl;
        for(int j=0; j<col; j++){
            cout<<grid[i][j]<<" | ";
            
        }  
        
        cout<<endl;    
    }
    //return grid;
}

// magic square fxn
void magicSquare(int grid[][col], int row){
int temp;
int row_number, col_number;
int user_input;

        cout<<"Here is your grid. Fill it up"<<endl;
    
    for (int i=0; i<row; i++){
        cout<<"------------"<<endl;
        for(int j=0; j<col; j++){
            cout<<grid[i][j]<<" | ";
            
        }  
        
        cout<<endl;    
    }

    cout<<"PRESS 1 TO ENTER A GRID OR 2 TO QUIT";
    system('CLS');
    cin>> temp;
    while(temp ==1 ){
    cout<<"Enter the row number: "<<endl;
    cin >> row_number;

    cout<<"Enter the column number: "<<endl;
    cin >> col_number;

    cout<<"What's your input?: "<<endl;
    cin >> user_input;

    cout<<"Updated grid"<<endl;
     draw(grid, user_input, row, row_number, col_number);

      cout<<"PRESS 1 TO ENTER A GRID OR 2 TO QUIT";
    cin>> temp;
    }

            

}

int main(){

    
    int grid[row][col] = {{0,0,0},{0,0,0},{0,0,0}};


    magicSquare(grid, row);
    return 0;
}

