#include "libraries.h"
#include "book.h"
#pragma once

class AudioBook:Book{
    private:
        string voiceActor;

    public:
      
        void setvoiceActor(string name);
        string getvoiceActor();
        void printdescription();
        AudioBook(string name);
};