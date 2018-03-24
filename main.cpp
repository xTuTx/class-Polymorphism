#include <iostream>

using namespace std;
class Player
{
    protected:
        int point,assist,rebound;
    public:
        void setdata(int a,int b , int c)
        {

            point = a;
            assist = b;
            rebound = c;
        }

};
class thunder :public Player
{
    public:
    void printdata()
    {
        cout<<point<<" "<<assist<<" "<<rebound<<endl;
    }
};
class warriors :public Player
{
    public:
    void printdata()
    {
        cout<<point<<" "<<assist<<" "<<rebound<<endl;
    }
};
int main()
{
    thunder pg;
    warriors kd;
    Player* player1 = &pg;
    Player* player2 = &kd;
    player1 ->setdata(18,10,5);
    player2 ->setdata(29,6,8);
    pg.printdata();
    kd.printdata();
    return 0;
}
