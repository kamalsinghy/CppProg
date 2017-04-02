#include <iostream>

class FuncTrace {
public:
    FuncTrace(std::string && functionName):funcName(functionName) {
        std::cout << "Entered: " << funcName << std::endl;
    }

    ~FuncTrace() {
        std::cout << "Exited: " << funcName << std::endl;
    }

private:
    std::string funcName;
};

#define FUNC_TRACE FuncTrace trace(std::string(__PRETTY_FUNCTION__));

void do_something_more()
{
    FUNC_TRACE
}

void do_something()
{
    FUNC_TRACE
    do_something_more();
}

void do_another_thing()
{
    FUNC_TRACE
}

int main ()
{
    FUNC_TRACE
    do_something();
    do_another_thing();

    return 0;
}
