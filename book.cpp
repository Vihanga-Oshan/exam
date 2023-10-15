#include "book.h"

Book::Book(string Title,string AuthorName){
    this->Title = Title;
    this->AuthorName = AuthorName;
};

void Book::setAuthorName(string AuthorName){
    this->AuthorName = AuthorName;
};

void Book::setTitle(string Title){
    this->Title = Title;
};

string Book::getAuthorName(){
    return AuthorName;
};

string Book::getTitle(){
    return Title;
};

void Book::printdescription(){
    cout<<"Title : "<<getTitle()<<endl;
    cout<<"Author Name : "<<getAuthorName()<<endl;
};