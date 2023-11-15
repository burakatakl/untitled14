#include "hayvan.h"
int main() {
    Hayvan kedi;
    kedi.SetName("Olcay")->
            SetAnimal("Kedi")->
            SetKind("British Shorthair")->
            SetAge(5)->
            Print();
    return 0;
}
