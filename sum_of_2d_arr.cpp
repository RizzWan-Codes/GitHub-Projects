#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

       

int main (){
    int row, col, option;
    
    char bro = 'o';
    char choice = 'y';

    cout << "\n============== Welcome To The Wizard 2D Arrays Project! ===================\n";

    while (bro == 'o' || bro == 'O'){
    
    cout << "Enter Number Of Rows : ";
    cin >> row;

    cout << "Enter Number Of Columns : ";
    cin >> col;

    int arr[100][100];
    if (row > 100 && col > 100){
        cout << "Too Big Number! Maximum Limit - 100!\n";
        continue;
    }

    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            cout << "Enter Numbers In [" << i << " , " << j << "] : ";
            cin >> arr[i][j];
        }
    }


     cout << "Here's Your Matrix! : \n";
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
           
            cout << arr[i][j] << "\t";
            

        }
        cout  << endl;
    }          

    cout << "Do you want to see addition of rows and columns? (Y/N) : ";
    cin >> choice;

    
    if (choice == 'y' || choice == 'Y'){
         cout << "Choose :\n1. Addition Of Rows\n2. Addition Of Columns\n3. Exit\n\nEnter Choice : \n";
        cin >> option;
    
            if (option == 1){
                for (int i = 0; i < row; i++){
                    int rowsum = 0;
                    for (int j = 0; j < col; j++){
                        rowsum += arr[i][j];
                    }
                        cout << "Sum Of Row " << i << " = " << rowsum << endl;
                }
            
        
    
    
    
          }else if (option == 2){
                for (int j = 0; j < col; j++){
                    int colsum = 0;
                    for (int i = 0; i < row; i++){
                        colsum += arr[i][j];
                    }
                        cout << "Sum Of Column " << j << " = " << colsum << endl;
                }
            
            }else if (option == 3){
                cout << "Exiting";
                for (int i = 1; i <= 3; i++){
                    cout << ".";
                    cout.flush();
                    std::this_thread::sleep_for(std::chrono::seconds(1));
                    
                }
                break;
                
            }else {
                cout << "Error! Only Choose Between 1 and 2!\n";
                continue;
            }
    } else {
        break;
    }
    
        
        cout << "Do you wanna play again? ('o' for yes & 'z' for no) : ";
        cin >> bro;
        
        if (bro == 'z' || bro == 'Z'){
            cout << "Exited!";
            break;
        }
    }

    return 0;
}

    

