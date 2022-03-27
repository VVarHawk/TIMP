#include <iostream>
#include <string>


int main()
{
    //var name
    std::string name;
    
    //name input
    getline(std::cin, name);
    
    //name output
    std::cout<<"Hello World from " << name;


    return 0;
}
