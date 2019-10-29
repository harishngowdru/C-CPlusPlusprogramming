// CPP program to demonstrate multithreading
// using three different callables.
#include <iostream>
#include <memory>
using namespace std;



int main()
{
    std::shared_ptr<int> p1(new int(10)); // shared pointer created
    std::shared_ptr<int> p2=p1; // Copy of shared pointer to another new shared pointer using assignment operator

    cout<<*p1 <<" "<<*p2<<endl;

    std::weak_ptr<int> wp {p2};// wp=p2; also works fine
    //wp=p2;

    std::shared_ptr<int> temp =wp.lock();// Now temp and p2 own the memory.
  // temp is initialized from a weak pointer, so you have to check if the
  // memory still exists!
  if(temp)
    cout<<*temp<<endl;

    p1.reset();//Memory still exists, due to p2.
    cout<<*p2<<endl;

    std::unique_ptr<int> up(new int(15));
    cout<<*up<<endl;
   // std::unique_ptr<int> up2 = up;  // Compile error.
    std::unique_ptr<int> up3 = std::move(up);  // Transfers ownership. p3 now owns the memory and p1 is set to nullptr.
    cout<<*up3;
	return 0;
}
