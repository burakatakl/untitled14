#include <iostream>

#ifndef UNTITLED14_HAYVAN_H
#define UNTITLED14_HAYVAN_H

class Hayvan {
public:
    Hayvan *SetName(std::string _name) {
        adi = _name;
        return this;
    }
    std::string& GetName(){
        return adi;
    }

    Hayvan *SetAnimal(std::string _type) {
        turu = _type;
        return this;
    }
    std::string& GetAnimal(){
        return turu;
    }


    Hayvan *SetKind(std::string _kind) {
        cinsi = _kind;
        return this;
    }
    std::string& GetKind(){
        return cinsi;
    }

    Hayvan *SetAge(int _age) {
        yas = _age;
        return this;
    }
    int& GetAge(){
        return yas;
    }

    void Print();

private:
    std::string adi;
    std::string turu;
    std::string cinsi;
    int yas;

};

#endif //UNTITLED14_HAYVAN_H
