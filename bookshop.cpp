#include "bookshop.h"


void Bookshop::addBook(string Title, string AuthorName, string voiceActor){
    bookCollection = static_cast<Bookshop*>(malloc(10*sizeof(Bookshop)));
};

Bookshop::~Bookshop(){
    delete[]bookCollection;
}

