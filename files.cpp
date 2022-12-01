#include <iostream>
using namespace std;
class TEST
{
private:
    int testCode;
    string descr;
    int no_cand;
    int cent_req;
    int CALCNTR();

public:
    void SCHEDULE(int, string, int);
    void DISPTEST();
};

int TEST ::CALCNTR()
{
    return ((no_cand / 100) + 1);
}

void TEST ::SCHEDULE(int t, string s, int n)
{
    testCode = t;
    descr = s;
    no_cand = n;
    cent_req = CALCNTR();
}

void TEST ::DISPTEST()
{
    cout << "Testcode : " << testCode << endl;
    cout << "Description : " << descr << endl;
    cout << "No. of candidates : " << no_cand << endl;
    cout << "Centre required : " << cent_req << endl;
}

int main()
{
    TEST t;
    t.SCHEDULE(5, "hello", 22);
    t.DISPTEST();
    return 0;
}