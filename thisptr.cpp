# include <iostream>
using namespace std;

class student{
    public:
    // data members
        string name;
        int age;
        string course;

        public:
        void setname(string n ){
            this->name = n;
            cout << "Name: " << n << endl;
        }
};

int main(){

    student s1;
    s1.setname("John Doe");

    return 0;
}