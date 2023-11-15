#include <iostream>

#ifndef UNTITLED14_HAYVAN_H
#define UNTITLED14_HAYVAN_H

#endif //UNTITLED14_HAYVAN_H

class Hayvan{
public:
   Hayvan* SetName(std::string _name){
       adi = _name;
       return this;
   }
    Hayvan* SetAnimal(std::string _type){
        turu = _type;
        return this;
    }
    Hayvan* SetKind(std::string _kind){
       cinsi = _kind;
       return this;
    }
    Hayvan* SetAge(int _age){
        yas = _age;
        return this;
    }
    void Print();
private:
    std::string adi;
    std::string turu;
    std::string cinsi;
    int yas;

};