#include "Config.h"

#include <iostream>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>

template<typename T>
void readParam(const boost::property_tree::ptree& pt, const std::string& propertyName, T& value)
{
    try
    {
        value = pt.get<T>(propertyName);
    }
    catch (const boost::property_tree::ptree_error& error)
    {
        std::cerr << "error reading " << propertyName << ": " << error.what() << "\n";
    }
}

void Config::readFile(const std::string& path)
{
    boost::property_tree::ptree pt;
    boost::property_tree::read_json(path, pt);
    readParam(pt, "param", m_param);
}
