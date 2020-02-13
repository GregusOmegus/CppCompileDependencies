#include <string>

class Config
{
public:
    void readFile(const std::string& path);
    int getParam() const { return m_param; }
private:

    int m_param{0};
    // presumably many other parameters
};
