#include <iostream>
#include<vector>
using namespace std;

class product
{
private:
public:
    string product_name;
    float quantity;
    float price;

    // functions
    void input()
    {
        cout << "enter product name: ";
        cin >> product_name;
        cout << "enter product quantity: ";
        cin >> quantity;
        cout<<"enter product price: ";
        cin >> price;
        cout << "wann add next item ?" << endl
             << "for 'YES' press 0 and for 'NO' perss 1 : "; 
    }

    void display()
    {
        cout << "product name: " << product_name << endl;
        cout << "product name: " << quantity << endl;
        cout << "product name: " << price << endl;
    }
};

int main()
{
    int i=0;
     product item[5];
    bool next_item=1;
    while ( i <= 3)
    {
       
       
        if (next_item == 0)
        {
            for(int j=0;j<=3;j++)
            {
            item[j].display();
            }
            break;
        }
        
        item[i].input();
        cin >> next_item;
        i++;
    }
    

    return 0;
}