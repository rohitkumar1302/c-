#include <iostream>
using namespace std;

class Book
{
public:
    string title;
    string author;
    int pages;
};

int main()
{

    Book book1;
    book1.title = "Ramayana";
    book1.author = "tulsi das";
    book1.pages = 2000;

    Book book2;
    book2.title = "Hanuman chalisa";
    book2.author = "indian man";
    book2.pages = 200;

    cout << book2.author;

    return 0;
}