// Create a class called book having a member name, price,
// author and pages. Create a file called ‘’Library.docx” and store
// record of 500 books. Now, read the file to print the information
// of the book which is above 300.

#include <iostream>
#include <fstream>
using namespace std;

class Book {
string name, author;
int pages, price;
public: 
void get_info() {
cout << "Enter name, author, pages, price: ";
cin >> name >> author >> pages >> price;
}
void set_info() {
cout << name << "\t" << author << "\t" << pages << "\t" << price << endl;
}
int returnPrice(){
    return price;
}

};

int main(){
    int numBooks, i;
    cout << "Enter the number of books" << endl;
    cin >> numBooks;
    Book* books = new Book[numBooks];
    fstream file;
    file.open("library.txt", ios::out);
    if (!file){
        cout << "Error opening file!" <<endl;
        return 1;
    }
    for (i = 0; i < numBooks; i++){
        cout << "Enter the details of books" << i+1 <<endl;
        books[i].get_info();
        file.write(reinterpret_cast<char*>(&books[i]), sizeof(Book));
    }
    file.close();
    file.open("library.txt", ios::in);
    if (!file){
        cout << "Error opening file!" <<endl;
        return 1;
    }
    cout << "Name \t" << "Author \t" << "Pages \t" << "Price" << endl;
    for (i = 0; i < numBooks; i++){
        if (books[i].returnPrice() > 300){
            file.read(reinterpret_cast<char*>(&books[i]), sizeof(Book));
            cout << "Book " << i+1 << ": ";
            books[i].set_info();
        }
    }
    file.close();
    return 0;
}

