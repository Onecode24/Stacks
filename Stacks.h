#include <vector>

class Stacks
{
private:
    std::vector<int> values;
public:
    Stacks(/* args */);
    ~Stacks();
    void addTop(int n);
    void removeTop();
    int getTop();
};


