#include <iostream>
using namespace std;
class Car
{
    public:
    virtual void Start()
    {
        cout << "Car Started" << endl;
    }
    virtual void Stop()
    {
        cout << "Car Stopped" << endl;
    }
};
class Innova:public Car
{
    public:
    void Start()
    {
        cout << "Innova Started" << endl;
    }
    void Stop()
    {
        cout << "Innova Stopped" << endl;
    }
};
class Swift:public Car
{
    public:
    void Start()
    {
        cout << "Swift Started" << endl;
    }
    void Stop()
    {
        cout << "Swift Stopped" << endl;
    }
};

int main()
{
    Car *c = new Innova();
    c->Start();
    c->Stop();
    c = new Swift();
    c->Start();
    c->Stop();
    return 0;
}