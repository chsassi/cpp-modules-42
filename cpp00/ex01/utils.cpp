#include <iostream>
#include <string>
#include <cstdlib>
#include <cstring>

#define MAX_SIZE 10

std::string renderWhitespaces(int diff, char delim)
{
    std::string resultString = "";

    for (int i = 0; i <= diff; i++)
        resultString += delim;
    return (resultString);
}

std::string normalise(std::string attribute)
{
    int len = attribute.size();

    if (len > MAX_SIZE)
        return (attribute.substr(0, MAX_SIZE));
    else
    {
        int diff = MAX_SIZE - len;
        std::string emptySpace = renderWhitespaces(diff, ' ');
        return (attribute + emptySpace);
    }
}
