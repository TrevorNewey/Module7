#include <iostream>
using namespace std;
class Counter{
private: unsigned int count; //only positive numbers
public:
    Counter():count(0){
                             //THis will initialize int count to 0 on startup
    };
    unsigned int get_count()
    {
        return count;
    }
    void operator ++(){         //Increment prefix //The operator keyword is used to overload the operator
        ++count;                //Operator is a KEYWORD
    }

};
//Main
int main() {
    Counter c1, c2;
    ++c1;
    ++c1;
    ++c1;
    ++c2;
    cout << "c1 = "<<c1.get_count()<<endl;
    cout<<"c2 = "<<c2.get_count()<<endl;
    //todo c1 = ++c2;

    return 0;
}