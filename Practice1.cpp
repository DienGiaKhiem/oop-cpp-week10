#include <iostream>
#include <string>

using namespace std;

class Food {
public:
    string id;
    string name;
    double price;
    int quantity;

    void input() {
        cout << "Nhap ten mon an: ";
        getline(cin, name);

        cout << "Nhap gia mon an: ";
        cin >> price;

        quantity = 0;
        cin.ignore();
    }

    void display() {
        cout << name << " - "
             << price << " (" << quantity << ")" << endl;
    }
};

int main() {
    Food foods[3];
    for (int i = 0; i < 3; i++) {
        foods[i].input();
    }

    cout << "===== Danh sach mon an ====="
         << endl;

    for (int i = 0; i < 3; i++) {
        foods[i].display();
    }

    
    string nameSearch;

    cout << "Nhap ten mon an can tim: ";
    getline(cin, nameSearch);

    bool found = false;

    for (int i = 0; i < 3; i++) {
        if (foods[i].name == nameSearch) {
            cout << "Tim thay mon an:" << endl;
            foods[i].display();

            double newPrice;

            cout << "Nhap gia moi: ";
            cin >> newPrice;

            foods[i].price = newPrice;

            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Khong tim thay mon an!" << endl;
    }

    cout << "===== Danh sach mon an ====="
         << endl;

    for (int i = 0; i < 3; i++) {
        foods[i].display();
    }

    return 0;
}