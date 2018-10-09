class HotDogStand {
private:
    int id;
    int numSoldToday;
    static int totalSold;
public:
    HotDogStand(int id, int numSoldToday);

    void justSold();
    int getId();
    int getNumSoldToday();
    static int getAmtSold();
};
