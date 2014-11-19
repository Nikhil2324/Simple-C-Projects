#include <iostream>
#include <string>
#include <cmath>

using namespace std;

bool isPowerOf2(int num)
{
    if (num == 0 || num == 1)
        return true;
    
    if (num % 2 == 1)
        return false;
    
    num /= 2;
    
    return isPowerOf2(num);
}

int powerOf2(int num)
{
    int count = 0;
    
    if (num == 0 || num == 1)
        return count;
    
    num /= 2;
    
    return 1 + powerOf2(num);
}


string intToBinary(int num)
{
    string binary;
    
    if (num == 0)
        return "0";
    
    if (num == 1)
        return "1";
    
    int power = powerOf2(num);
    
    if (isPowerOf2(num))
    {
        int length = powerOf2(num);
        binary += '1';
        for (int k = 0; k < length; k++)
            binary += '0';
        return binary;
    }
    
    else
    {
        while (power >= 0)
        {
            if (num >= pow(2, power))
            {
                binary += '1';
                num -= pow(2, power);
            }
            
            else
                binary += '0';
            
            power --;
        }
    }
    
    return binary;
}
