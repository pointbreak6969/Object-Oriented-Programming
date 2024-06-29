//create a file "welcome.txt" and write "welcome to file handeling in c++ " and 
//read the file content

#include <iostream>
#include<fstream>
using namespace std;

int main(){
    fstream file;
    file.open("welcome.txt",ios::out); //writing in the file
    if(!file){
        cout<<"Error in creating file.."<<endl;
        return 0;
    }
    cout<<"File created successfully.."<<endl;
    file<<"Welcome to file handling in c++";
    file.close();
    file.open("welcome.txt",ios::in); //reading the file
    if(!file){
        cout<<"Error in opening file.."<<endl;
        return 0;
    }
    cout<<"File opened successfully.."<<endl;
    string line;
    while(getline(file,line)){
        cout<<line<<endl;
    }
    file.close();
    return 0;    
}
