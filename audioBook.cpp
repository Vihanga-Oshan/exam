#include "audiobook.h"

void AudioBook::setvoiceActor(string name){
            voiceActor = name;
};
string AudioBook::getvoiceActor(){
            return voiceActor;        
};



void AudioBook::printdescription(){
        cout<<"Title : "<<getTitle()<<endl;
        cout<<"Author Name : "<<getAuthorName()<<endl;
        cout<<"VoiceActor : "<<getvoiceActor()<<endl;
};

