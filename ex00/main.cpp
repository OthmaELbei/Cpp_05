#include "Bureaucrat.hpp"


int main()
{
    try
    {
        Bureaucrat a("ahmed", 30);
        a.incrementing();
        std::cout << a.getGrade() << std::endl;
        a.incrementing();
        // a.decrement();
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}
