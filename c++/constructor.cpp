#include <iostream>
using namespace std;

class Book
{

public:
    string title;
    string author;
    int pages;
    Book(string aTitle, string aAuthor, int aPages)
    {
        title = aTitle;
        author = aAuthor;
        pages = aPages;
    }

    Book()
    {
        title = "no title";
        author = "no author";
        pages = 0;
    }
};
int main()
{

    Book book1("Harry poter", "Jk Rowling", 700);

    Book book2("Lord of the rings", "TOLEKEIN", 600);

    Book book3;

    cout << book3.title << endl;

    return 0;
}