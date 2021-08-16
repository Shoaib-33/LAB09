#include <bits/stdc++.h>
using namespace std;

typedef long long ll;





class Furniture
{

public:
    int regular_p;
    int discount_p;
    string material;
    string name;

    virtual void get() {}
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

    void get()
    {


        cout<<"Enter the product name :";
        cin>>name;
        cout<<"Enter the regular price :";
        cin>>regular_p;
        cout<<"Enter the discounted price :";
        cin>>discount_p;
        cout<<"Enter the material:";
        cin>>material;
    }

    void productDetails()
    {
        cout<<"Product Name:"<<name<<endl;
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
    void get()
    {

        cout<<"Enter the product name :";
        cin>>name;
        cout<<"Enter the regular price :";
        cin>>regular_p;
        cout<<"Enter the discounted price :";
        cin>>discount_p;
        cout<<"Enter the material:";
        cin>>material;
    }
    void productDetails()
    {
        cout<<"Product Name:"<<name<<endl;
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

    void get()
    {


        cout<<"Enter the product name :";
        cin>>name;
        cout<<"Enter the regular price :";
        cin>>regular_p;
        cout<<"Enter the discounted price :";
        cin>>discount_p;
        cout<<"Enter the material:";
        cin>>material;
    }
    void productDetails()
    {
        cout<<"Product Name:"<<name<<endl;
        cout<<"Regular price:"<<regular_p<<endl;
        cout<<"Discounted price:"<<discount_p<<endl;
        cout<<"Material is:"<<material<<endl;
        cout<<"Chair Counts:"<<count<<endl;

    }

};
void sort(Furniture**s,int n)
{

    int j;
    for(int i=0; i<n; i++)
    {
        for( j=i+1; j<n; j++)
        {

            if (s[i]->discount_p <s[j]->discount_p)
            {
                swap(s[i],s[j]);
                cout<<"Swapped"<<endl;

            }

        }

    }
}

int main()
{
    Furniture *f[10];
    f[0]=new Bed("Single");
    f[1]=new Sofa(100);
    f[2]=new DiningTable(10);
    f[3]=new Bed("Double");
    for(int i=0; i<4; i++)
    {
        f[i]->get();
    }
    sort(f,4);


    for(int i=0; i<4; i++)
    {  if(f[i])
        f[i]->productDetails();
    }
delete f[0];
delete f[1];
delete f[2];
delete f[3];

}

