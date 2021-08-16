#include <bits/stdc++.h>
using namespace std;

typedef long long ll;



    class Furniture
    {


    };
    class Bed:public Furniture
    {
    private:
        string bed_size;
        public:
    Bed(string s):bed_size(s){}




    };
    class Sofa:public Furniture
    {

    private:
        int seat_number;
    public:
        Sofa(int a):seat_number(a){}


    };


    class DiningTable:public Furniture
    {
    private:
        int count;
    public:
        DiningTable(int b):count(b){}

    };

int main() {
      Furniture *f;
    Bed b("Single");
    f=&b;

        Sofa s(10);
    f=&s;

  DiningTable d(100);
    f=&d;

}


