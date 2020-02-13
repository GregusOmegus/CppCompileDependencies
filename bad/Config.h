#include <string>
#include <boost/property_tree/ptree.hpp>

class Config
{
public:
    void readFile(const std::string& path);
    int getParam() const { return m_param; }
private:
    template<typename T>
    void readParam(const boost::property_tree::ptree& pt, const std::string& propertyName, T& value)
    {
        value = pt.get<T>(propertyName);
    }

    int m_param{0};
    // presumably many other parameters
};
