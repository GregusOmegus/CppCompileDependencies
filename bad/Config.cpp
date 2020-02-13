#include "Config.h"
#include <boost/property_tree/json_parser.hpp>

void Config::readFile(const std::string& path)
{
    boost::property_tree::ptree pt;
    boost::property_tree::read_json(path, pt);
    readParam(pt, "param", m_param);
}
