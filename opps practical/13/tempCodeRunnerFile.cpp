#include <iostream>
using namespace std;

class father{
    public:
    father(){
        cout<<"I am father"<<endl;
    }
};
class mother{
    public:
    mother(){
        cout<<"I am mother"<<endl;
    }
};
class child:public father, public mother{};

int main() {
    child c1;    
    return 0;
}