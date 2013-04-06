#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;

string n;
string m;
string p;

int comp(string str1,string str2)  
{  
    if(str1==str2)  
        return 0;  
    if(str1.size() > str2.size())  
        return -1;  
    if(str1.size() < str2.size())  
        return 1;  
    if(str1.size() == str2.size())  
        for(int i=0;i<str1.size();i++)  
        {  
            if(str1.at(i)>str2.at(i))  
                return -1;  
            else if(str1.at(i) < str2.at(i))  
                return 1;  
            else  
                continue;  
        }  
    return 0;  
}

string add(string str1,string str2)  
{  
    int i;  
    if(str1.size()==1 && str2.size()==1 && str1.at(0)=='0' && str2.at(0)=='0')  
        return "0";  
    if(str1.size() < str2.size())  
        swap(str1,str2);  
    vector<int> num1,num2;  
    for(i=str1.size()-1;i>=0;i--)  
        num1.push_back(str1.at(i)-'0');  
    for(i=str2.size()-1;i>=0;i--)  
        num2.push_back(str2.at(i)-'0');  
    for(i=0;i<3;i++)  
        num1.push_back(0);  
    //以长度短的数开始做加法  
    for(i=0;i<str2.size();i++)  
    {  
        num1[i] += num2[i];  
        if(num1[i]>=10)  
        {  
            num1[i] -= 10;  
            num1[i+1]++;  
        }  
    }  
    //调整str1  
    for(;i<str1.size();i++)  
        if(num1[i]>=10)  
        {  
            num1[i] -= 10;  
            num1[i+1]++;  
        }  
    //把数字前面的0滤掉  
    string result;  
    bool flag=0;  
    for(i=num1.size()-1;i>=0;i--)  
        if(num1.at(i)!=0||flag)  
        {  
            flag=1;  
            result += num1.at(i)+'0';  
        }   
    return result;  
}

int main()
{
    cin>>n>>m;
    cout<<add(n, m)<<endl;
    return 0;
}

