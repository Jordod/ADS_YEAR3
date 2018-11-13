class NodeOfInt {
    friend class ListOfInts;
public:
    NodeOfInt(int);
private:
    int num;
    NodeOfInt* next;
};