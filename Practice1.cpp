#include <iostream>
#include <string>
using namespace std;

class Food{
    public:
    string foodName;
    double price;
    int quantity;

    void NhapThongTin(){
        cout << "Nhap ten mon an:";
        getline(cin, foodName);
        cout << "Nhap gia mon an:";
        cin >> price;
        cout << "Nhap so luong mon an:";
        cin >> quantity;
    }

    void XuatThongTin(){
        cout << "Ten mon an: " << foodName << " - " << price << " - " << quantity << endl;
    }



};




int main(){
    Food food1;
    food1.NhapThongTin();
    food1.XuatThongTin();
    return 0;
}