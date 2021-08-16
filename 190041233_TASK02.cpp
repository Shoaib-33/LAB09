#include <bits/stdc++.h>
using namespace std;

typedef long long ll;





class Furniture
{

public:
    int regular_p;
    int discount_p;
    string material;
    void get()
    {
        cout<<"Enter the regular price :";
        cin>>regular_p;
        cout<<"Enter the discounted price :";
        cin>>discount_p;
        cout<<"Enter the material:";
        cin>>material;
    }




    virtual void productDetails()
    {

    }

};
class Bed:public Furniture
{
private:
    string bed_size;
public:
    Bed(string s):bed_size(s) {}

    void get1()
    {

        get();
    }

    void productDetails()
    {
        cout<<"Regular price:"<<regular_p<<endl;
        cout<<"Discounted price:"<<discount_p<<endl;
        cout<<"Material is:"<<material<<endl;
        cout<<"Bed size:"<<bed_size<<endl;

    }


};
class Sofa:public Furniture
{

private:
    int seat_number;
public:
    Sofa(int a):seat_number(a) {}
    void get2()
    {

        get();
    }
    void productDetails()
    {
        cout<<"Regular price:"<<regular_p<<endl;
        cout<<"Discounted price:"<<discount_p<<endl;
        cout<<"Material is:"<<material<<endl;
        cout<<"Sofa Seats:"<<seat_number<<endl;

    }

};


class DiningTable:public Furniture
{
private:
    int count;
public:
    DiningTable(int b):count(b) {}

    void get3()
    {

        get();
    }
    void productDetails()
    {
        cout<<"Regular price:"<<regular_p<<endl;
        cout<<"Discounted price:"<<discount_p<<endl;
        cout<<"Material is:"<<material<<endl;
        cout<<"Chair Counts:"<<count<<endl;

    }

};

int main()
{
    Furniture *f;
    Bed b("Single");
    f=&b;
    b.get1();
    f->productDetails();
    Sofa s(10);
    f=&s;
    s.get2();
    f->productDetails();
    DiningTable d(100);
    f=&d;
    d.get3();
    f->productDetails();


}
