# include <iostream>
using namespace std;

class mobilShop{

    public:
    // data members
        string mobilname;
        string brandname;
        int price;

    mobilShop(string mname, string bname, int p){
        mobilname = mname;
        brandname = bname;
        price = p;
    }

    void display(){
        cout << "Mobil Name: " << mobilname << endl;
        cout << "Brand Name: " << brandname << endl;
        cout << "Price: " << price << endl;
    }

};

int main(){

    mobilShop m1("iPhone 14", "Apple", 1200);
    m1.display();

    return 0;
}