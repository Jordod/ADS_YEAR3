#include "NodeOfInt.h"
class ListOfInts {
public:
    ListOfInts();
    ~ListOfInts();

    void insert(int);
    void display();
    int deleteMostRecent();
    int deleteAt(int);
private:
    NodeOfInt* head;
};