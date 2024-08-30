#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

class Book{
		
	public:
		string title, author;
		int year;
		
		Book(string t, string a, int y){
			title = t;
			author = a;
			year = y;
	}
};

class Library{
	private:
		vector<Book> books; //vector to add books
		
	public:   
		void AddBook(){
			string title, author;
			int year;
			
			cin.ignore();
			cout << "---- A D D   B O O K ----" << endl << endl;
			cout << "Enter Title: ";
				getline(cin, title);
			cout << "Enter Author: ";
				getline(cin, author);
			cout << "Enter Year Published: ";
				cin >> year;
			cout << "\nBook added successfully!" << endl;
			
			Book b(title, author, year);
			books.push_back(b);
			
			system("PAUSE");
			system("CLS");
	}	
		
		void DisplayBook(){
			cout << "---- D I S P L A Y   B O O K S ---- " << endl << endl;
			cout << "B O O K   L I S T:" << endl;
			cout << "TITLE \tAUTHOR \tYEAR" << endl;
			if(books.empty()){
				cout << "Nothing to display.";
			}
			for (int i=0; i < books.size(); i++){
				cout << books[i].title << "\t" << books[i].author << "\t" << books[i].year << endl;
			}
			
			system("PAUSE");
			system("CLS");
		}
	
		void SearchBook(){
			string title;
			bool found = false;
			
			cin.ignore();
			cout << "---- S E A R C H   B O O K ----" << endl;
			cout << "Enter a book to search: ";
				getline(cin, title);
			
			for (int i=0; i < books.size(); i++){
				if (title == books[i].title){
					cout << "\nBook found!" << endl;
					cout << "Title: " << books[i].title << endl;
					cout << "Author: " << books[i].author << endl;
					cout << "Year: " << books[i].year << endl;
					found = true;
			        break;
				}
			}
			
			if (!found){
				cout << "Book not found!" << endl;
			}
			
			system("PAUSE");
			system("CLS");
		}
};
	
int main(){
	Library l1;
	int choice;
				
	do{
		cout << "--------- M E N U ---------" << endl << endl;
		cout << "1 - Add Book" << endl;
		cout << "2 - Display Book" << endl;
		cout << "3 - Search Book" << endl;
		cout << "4 - Exit" << endl;
		cout << "\nEnter a number: ";
			cin >> choice;
		system("CLS");
		switch (choice) {
			case 1: l1.AddBook();
				break;
			case 2:	l1.DisplayBook();
				break;
			case 3: l1.SearchBook();
				break;
			case 4: cout << "Exiting Program...";
				exit(0);
				break;	
		}
	} while(choice!=4);
}
