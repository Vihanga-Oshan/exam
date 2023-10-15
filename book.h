#include "libraries.h"


class Book{
    private:
        string Title;
        string AuthorName;

    public:
        Book(string Title, string AuthorName);
        void setTitle(string name);
        string getTitle();
        void setAuthorName(string name);
        string getAuthorName();
        void printdescription();
};