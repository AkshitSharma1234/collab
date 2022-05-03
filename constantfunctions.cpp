#include<iostream>
using namespace std;
class counter{
    int count;
    public:
        void set(){
            count  = 0;
        }
        void inc(){
            count++;
        }
        void display() const{
            // count++;
            cout << count;
        }
};
int main(){
    counter c1;
    c1.set();
    c1.inc();
    c1.display();
     
    return 0;
}
