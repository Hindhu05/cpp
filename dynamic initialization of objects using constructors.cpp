#include <iostream>
using namespace std;

class BankDeposit
{
    int principle;
    int years;
    float interestrate;
    float returnvalue;

public:
    BankDeposit() {}
    BankDeposit(int p, int y, float r);
    BankDeposit(int p, int y, int r);
    void show();
};

BankDeposit ::BankDeposit(int p, int y, float r)
{
    principle = p;
    years = y;
    interestrate = r;
    returnvalue = principle;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + interestrate);
    }
}
BankDeposit ::BankDeposit(int p, int y, int r)
{
    principle = p;
    years = y;
    interestrate = float(r) / 100;
    returnvalue = principle;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + interestrate);
    }
}
void BankDeposit::show()
{
    cout << endl
         << "principle amount was " << principle
         << ". return value after " << years
         << " years is " << returnvalue << endl;
}

int main()
{
    BankDeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;

    cout << "enter the value of p, y, r " << endl;
    cin >> p >> y >> r;//100,1,0.03 = 103
    bd1 = BankDeposit(p, y, r);
    bd1.show();

    cout << "enter the value of p, y, R " << endl;
    cin >> p >> y >> R;//100,1,3 = 103
    bd2 = BankDeposit(p, y, R);
    bd2.show();

    return 0;
}
//not understood