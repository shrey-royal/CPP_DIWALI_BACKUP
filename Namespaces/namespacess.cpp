#include<iostream>
using namespace std;

namespace First
{
    void hello() {
        std::cout << "Hello from First namespace!" << std::endl;
    }
} // namespace First

namespace Second
{
    void hello() {
        std::cout << "Ram Ram!" << std::endl;
    }
} // namespace Second

// using namespace Second;
int main() {
    // hello();
    First::hello();
    Second::hello();


    return 0;
}
