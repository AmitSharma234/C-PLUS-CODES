#include <iostream>
#include <string>
using namespace std;
struct library {
	string book_name;
	string author;
	int pages;
	float price;
};
int main()
{
	library lib[100];
   string ar_nm, bk_nm;  
	int i, input, count;
   i = input = count = 0;
	while (input != 5) {
     cout << "\n\n********######"
			<< "WELCOME TO PT-LIBRARY "
			<< "#####********\n";
		cout << "\n\n1. Add book information\n2. Display book information\n";
		cout << "3. List all books of given author\n";
		cout << "4. List the count of books in the library\n";
		cout << "5. Exit\n";
		cout << "\n\nEnter one of the above: ";
		cin >> input;
     	switch (input) {
		case 1:   //ADD BOOK
     		cout << "Enter book name = ";
			cin >> lib[i].book_name;
			cout << "Enter author name = ";
			cin >> lib[i].author;
			cout << "Enter pages = ";
			cin >> lib[i].pages;
			cout << "Enter price = ";
			cin >> lib[i].price;
			count++;
    	break;
		case 2:  //PRINT BOOK INFORMATION
			cout << "you have entered the following information\n";
			for (i = 0; i < count; i++) {
				cout << "book name = " << lib[i].book_name;
				cout << "\t author name = " << lib[i].author;
				cout << "\t pages = " << lib[i].pages;
				cout << "\t price = " << lib[i].price << endl;
			}
			break;
		case 3:
			cout << "Enter author name : "; //INPUT AUTHOR
			cin >> ar_nm;
			for (i = 0; i < count; i++) {
				if (ar_nm == lib[i].author)
					cout << lib[i].book_name << " " << lib[i].author << " " << lib[i].pages << " " << lib[i].price << endl;
			}
			break;
		case 4:
			cout << "\n No of books in library : " << count << endl;
			break;
		case 5:
			exit(0);
		}
	}
	return 0;
}
