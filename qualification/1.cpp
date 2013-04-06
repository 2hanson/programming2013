#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

class Solution
{
    private:
        int n, m;
        vector<string> words;
        map<string, string> dic;
    public:
        Solution(int tn, int tm)
        {
            dic.clear();
            words.clear();
            n = tn;
            m = tm;
        }

        void insertIntoDic(string k, string v)
        {
            dic.insert( pair <string, string>  (k, v) );
        }

        void insertIntoWords(string word)
        {
            words.push_back(word);
        }

        string getWords()
        {
            string tws = "";
            for (int i = 0; i < words.size(); ++i)
            {
                if (i > 0)
                {
                    tws += ' ';
                }
                tws += words[i];
            }

            return tws;
        }

        void dowork()
        {
            map<string, string>::iterator it;
            for (int t = 1; t < n; ++t)
            {
                for (int w = 0; w < words.size(); ++w)
                {
                    it = dic.find(words[w]);
                    if (dic.find(words[w]) != dic.end())
                    {
                        words[w] = it->second;
                    }
                }
            }
        }
};

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int T, n, m;
    string tk, tv;
    string word;
    cin>>T;
    Solution *sl;
    for (int index = 1; index <= T; ++index)
    {
        cin>>n>>m;
        sl = new Solution(n, m);
        while (m--)
        {
            cin>>tk>>tv;
            sl->insertIntoDic(tk, tv);
        }

        char ch = 'a';
        while (ch != '\n')
        {
            cin>>word;
            sl->insertIntoWords(word);
            ch = getchar();
        }
        sl->dowork();
        cout<<"Case #"<<index<<": "<<sl->getWords()<<endl;
    }

    return 0;
}

