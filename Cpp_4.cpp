#include <iostream>

class RtGlobal {
public:
    static RtGlobal& getInstance() {
        static RtGlobal instance;
        std::cout << "singleton instance" << std::endl;
        return instance;
    }

private:
    RtGlobal() { std::cout << "singleton constructor" << std::endl; }
    ~RtGlobal() { std::cout << "singleton destructor" << std::endl; }

    RtGlobal(const RtGlobal&) = delete;
    RtGlobal& operator=(const RtGlobal&) = delete;
    RtGlobal(RtGlobal&&) = delete;
    RtGlobal& operator=(RtGlobal&&) = delete;
};

int main()
{
    auto& rtGlobal = RtGlobal::getInstance();
    auto& rt1Global = RtGlobal::getInstance();

    return 0;
}
