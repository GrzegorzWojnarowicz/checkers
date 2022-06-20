#include "Checkers.hpp"

int main()
{
    try
    {   
        Checkers c;
        c.run();
    }
    catch (...)
    {
        std::cerr << "Something went wrong, for more info call the developer of this code" << std::endl;
        return -1;
    }
    
    return 0;
}