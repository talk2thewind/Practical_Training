//1.ListInsert2.cpp
/*#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void insertData(vector<int> arr, int n, int x)
{
    arr.push_back(x);
    sort(arr.begin(), arr.end(), greater<int>());
    for(int i : arr){
        cout << i << " ";
    }
    return;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for(int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        arr.push_back(tmp);
    }
    sort(arr.begin(), arr.end(), greater<int>());
    int x;
    cin >> x;
    insertData(arr, n, x);
    return 0;
}*/
//2.killPrisoner.cpp
/*#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
//n = 2,2
//n = 3,2
//n = 4,4
//n = 5,4
//n = 6,4
//n = 7,4
//n = 8,8
//2,4,8,16,32,64,128,256,512,1024
int main(void)
{
    int n;
    cin >> n;
    int index;
    int i = 1, num2 = 0;
    for(; num2 <= n; i++){
        num2 = pow(2,i);
        index = i;
    }
    cout << pow(2, index - 1);
    return 0;
}*/
//3.wordMax.cpp
/*#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void)
{
    vector<string> x;
    string word;
    //string* x = new string[100];
    int index = 0;
    while(cin>>word)
    {
        if(word == "0"){
            break;
        }
        x.push_back(word);
        index ++;
    }
    int biggest = 0;
    for(int i = 0; i < x.size(); i++){
        biggest = x[i].length() > biggest ? x[i].length() : biggest;
    }
    for(int i = 0; i < x.size(); i++){
        if(x[i].length() == biggest){
            cout << x[i];
            return 0;
        }
    }
    return 0;
}*/
//4.wordCount.cpp
/*#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

struct StringCompare {
    std::string target;

    StringCompare(const std::string& str) : target(str) {}

    bool operator()(const std::pair<int, std::string>& element) const {
        return element.second == target;
    }
};

int main(void)
{
    vector<string> x;
    map<string, int> wordnums;
    string word;
    int index = 0;
    while(cin>>word)
    {
        if(word == "0"){
            break;
        }
        x.push_back(word);
        index ++;
    }
    for(int i = 0; i < x.size(); i++)
    {
        auto it = wordnums.find(x[i]);
        //auto it = wordnums.find(x[i]);
        //cout << (it == wordnums.end()) << endl;
        if(it == wordnums.end()){
            wordnums.insert(make_pair(x[i], 1));
        }else{
            it->second ++;
            //(it->first)++;
        }
    }

    for(auto i = wordnums.begin(); i != wordnums.end(); i++){
        cout << i->first << "\t" << i->second << endl;
    }
    return 0;
}*/
//5.magic.cpp
#include <iostream>
using namespace std;
//odd case
int main(void)
{
    int n;
    cin >> n;
    int magic[n][n] = {0, 0, 0};

    for(int i = 0, j = n/2, val = 1;val <= n*n;val++){
        if(val % n == 0){
            magic[i][j] = val;
            i = (i+1)%n;
            continue;
        }
        magic[i][j] = val;
        //cout << i << " " << j << endl;
        i = (i-1+n)%n;
        j = (j+1)%n;
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << magic[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}

