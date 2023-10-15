#include "libraries.h"
#include "audiobook.h"
#pragma once

class Bookshop:AudioBook{
    private:
        Bookshop *bookCollection;
        static string noOfBooksAdded;

    public:
    AudioBook setAuthorName(string name);
        ~Bookshop();
        static void noOfBooks();
        void addbook(string Title, string AuthorName);
        void addBook(string Title, string AuthorName, string voiceActor);
        Bookshop(string title, string author, string voiceactor);
};