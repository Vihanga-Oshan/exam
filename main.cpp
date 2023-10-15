

#include "bookshop.h"
#include "audiobook.h"
#include "string.h"

int main(){
    char type[10];
    string Title,authorName,voiceActor;
    cout<<"Is it an Audiobook or a Book? ";
    cin>>type;
   if(strcmp(type,"Book")){
        cout<<"Enter Title ";
        cin>>Title;
        cout<<"Enter Author Name ";
        cin>>authorName;
        Book(Title,authorName);
       



    }else{
        cout<<"Enter Title ";
        cin>>Title;
        cout<<"Enter Author Name ";
        cin>>authorName;
        cout<<"Enter Voice Actor name ";
        cin>>voiceActor;
        Book(Title,authorName);
       
        
    }
}
