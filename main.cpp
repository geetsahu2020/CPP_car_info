#include <iostream>
#include <sstream>
using namespace std;
class car{
    private:
    int price, year;
    string brand, model;
    public:
    int get_price(){return price;}
    int get_year(){return year;}
    string get_brand(){return brand;}
    string get_model(){return model;}
    void set_price(int p){price= p;}
    void set_year(int y){year= y;}
    void set_brand(string bn){brand = bn;}
    void set_model(string md){model= md;}
    string to_string(){
        stringstream ss;
        ss << "(" << brand << ", " << model<< ", " << year << ", " << price << ")";
       
        return ss.str();
    }
};
int main() {
    car info;
    int price, year;
    string brand, model;
    cin >> brand >> model >> year >> price;
    info.set_price(price);
    info.set_year(year);
    info.set_brand(brand);
    info.set_model(model);
    cout << info.get_brand() << endl;
    cout << info.get_model() << endl;
    cout << info.get_year() << endl;
    cout << info.get_price() << endl;
    cout << endl << info.to_string();
}