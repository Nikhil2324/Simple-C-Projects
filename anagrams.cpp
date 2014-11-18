#include <string>

using namespace std;

bool anagrams(string s1, string s2)
{
    if (s1.size() != s2.size())
        return false;
    int s1Letters[255];
    int s2Letters[255];
    
    for (int k = 0; k < 256; k++)
    {
        s1Letters[k] = 0;
        s2Letters[k] = 0;
    }
    
    for (int k = 0; k < s1.size(); k++)
    {
        int index1 = (int)s1[k];
        int index2 = (int)s2[k];
        
        s1Letters[index1]++;
        s2Letters[index2]++;
    }
    
    for (int k = 0; k < 255; k++)
        if (s1Letters[k] != s2Letters[k])
            return false;
    return true;
}
