//Tgs.cpp.
//#include <iostream>
//#include <cmath>
//using namespace std;

/*int main(void)
{
    for(int i = 1; i < 10000; i++){
        int num = i;
        int dec = 0;
        int numpow = i * i;
        for(int j = 1; j <= 5;){
            if((num /=10) != 0){
                j ++;
                dec = j;
                //cout <<dec << endl;
            }else{
                dec = j;
                break;
            }
        }
        num = i;
        for(int k = 0; k < dec+1; ){
            if(k == dec){
                cout << i << endl;
                break;
            }
            if(num % 10 == numpow % 10){
                num/=10;
                numpow/=10;
                k++;
            }else{
                break;
            }
        }

    }
    return 0;
}*/




/*//DecomposeTest.cpp
#include <iostream>
#include <string>
using namespace std;

bool isPrime(int n){
    int count = 0;
    for(int i = 1; i < n + 1; i ++){
        if(n % i == 0){
            count ++;
        }
    }
    return (count == 2);
}
int main(void)
{
    int n;
    cin >> n;
    cout << n << '=';
    string ans;
    int i = 2;
    for(; i < n; i ++){
        if(isPrime(n)){
                ans.push_back(n);
                //cout << n;
                break;
            }
       if(isPrime(i)){
        if(n % i == 0){
            n /= i;
            //cout << i << endl;
            ans.push_back(i);
            i = 2;
            if(isPrime(n)){
                ans.push_back(n);
                //cout << n;
                break;
            }
        }
       }
    }
    for(int j = 0; j < ans.length()-1; j ++){
        cout << (int)ans[j] << '*';//单引号，打印是打印字符，需要转换
    }
    cout << (int)ans[ans.length()-1];
    return 0;
}*/

//CodeEncry.cpp
