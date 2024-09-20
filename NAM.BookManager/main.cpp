//Nick Moede
//Assignment #3 09/19/2024

#include <iostream>
#include <conio.h>

using namespace std;

struct Book
{
	string title;
	string author;
	int yearPublished;
	int numPages; //initialize the struct with the following values
};

//create an array of books that holds 4 books


int main()
{
	const int NUM_BOOKS = 4;
	Book books[NUM_BOOKS] =  //this is an array (book) of a struct called (Book) that holds 4 books
	{
		{"The Great Gatsby", "F. Scott Fitzgerald", 1925},
		{"To Kill a Mockingbird", "**null**" , 1960, 281},
		{"1984", "George Orwell", 1949, 328},
		{"The Catcher in the Rye", "J.D. Salinger", 1951, 214}
	};

	//Prompt the user to enter the ID(index) of a book(e.g., 0 for the first book, 1 for the second, etc.).
	//	Use the ID to access the book's author, year of publication, and the number of pages.
	//	Prompt the user to update the author, year of publication, and the number of pages.
	//	Ask the user if they want to save the changes(Y / N).
	//	If the ID is invalid(e.g., out of bounds), display a message indicating that the book is not in the library.

	cout << "The library has the following books: " << endl;
	cout << endl;
	for (int i = 0; i < NUM_BOOKS; i++)
	{
		cout << books[i].title << " has a author of " << books[i].author << " and was published in " << books[i].yearPublished << " and has " << books[i].numPages << " pages." << endl;
	};
	cout << "--------------------------------------------------------------------------------------------------------\n";
	cout << "////////////////////////////////////////////////////////////////////////////////////////////////////////\n";
	cout << "--------------------------------------------------------------------------------------------------------\n";

	//prompt the user to enter the id of the book they would like to update
	int id = 0;
	do {
		cout << "Enter the ID of the book you would like to update (1-4): ";
		cin >> id;
		if (id < 1 || id > NUM_BOOKS)
		{
			cout << "The book is not in the library." << "\n>";

		}
	
	} while (id < 1 || id > NUM_BOOKS);
	cout << "--------------------------------------------------------------------------------------------------------\n";
	//end of user input for id
	

	//subtract 1 from the id to get the correct index in the array

	id = id - 1;

	cout << "You have selected " << books[id].title << " to update." << endl;
	cout << "--------------------------------------------------------------------------------------------------------\n";

	//prompt the user to update the author, year of publication, and the number of pages verify variable type

	cout << "Enter the author of the book: ";
	cin >> books[id].author;
	cout << "--------------------------------------------------------------------------------------------------------\n";
	cout << "Enter the year of publication: ";
	cin >> books[id].yearPublished;
	cout << "--------------------------------------------------------------------------------------------------------\n";
	cout << "Enter the number of pages: ";
	cin >> books[id].numPages;
	cout << "--------------------------------------------------------------------------------------------------------\n";
	char save;
	cout << "Do you want to save the changes? (Y/N): ";
	cin >> save;
	cout << "--------------------------------------------------------------------------------------------------------\n";
	if (save == 'Y' || save == 'y')
	{
		cout << "The book has been updated." << endl;
		//print out the updated book by id in the array
		cout << books[id].title << " has a author of " << books[id].author << " and was published in " << books[id].yearPublished << " and has " << books[id].numPages << " pages." << endl;
		cout << "--------------------------------------------------------------------------------------------------------\n";
		cout << "////////////////////////////////////////////////////////////////////////////////////////////////////////\n";
		cout << "--------------------------------------------------------------------------------------------------------\n";
		//print out the updated book by id in the array by saving the changes
		cout << "The library has the following books: " << endl;
		cout << endl;
		for (int i = 0; i < NUM_BOOKS; i++)
		{
			cout << books[i].title << " has a author of " << books[i].author << " and was published in " << books[i].yearPublished << " and has " << books[i].numPages << " pages." << endl;
		};
		cout << "--------------------------------------------------------------------------------------------------------\n";
		cout << "////////////////////////////////////////////////////////////////////////////////////////////////////////\n";
		cout << "--------------------------------------------------------------------------------------------------------\n";
	}
	else
	{
		cout << "The book " << books[id].title << " has not been updated." << endl;
	}

	//print out the updated book by id in the array by saving the changes

	cout << "Press any key to exit." << endl;

	//wait for the user to press a key before exiting
	(void)_getch();
	return 0;
}