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
/*#include <iostream>
#include <string>
using namespace std;

string reverse(string &x)
{
    char tmp1 = x[1];
    char tmp2 = x[0];
    x[1] = x[2];
    x[2] = tmp1;
    x[0] = x[3];
    x[3] = tmp2;
    return x;
}

string encryption(string x)
{
    string outcome;
    for(int i = 0; i < x.length(); i++){
        x[i] += 5;
        x[i] %=10;
    }
    return reverse(outcome);
}

int main(void)
{
    int n;
    cin >> n;
    while (n--){
       string input;
       cin >> input;
       string tmp = encryption(input);
       for(int i = 0; i < tmp.length(); i++){
        cout << tmp[i];
       }
       cout <<endl;
    }
    return 0;
}
*/
//no string
/*#include <iostream>
using namespace std;

int main(void)
{
       int input[4];
       for(int i = 0; i < 4; i++){
        cin >> input[i];
       }
       cout << (input[3] + 5) % 10 << (input[2] + 5) % 10 << (input[1] + 5) % 10 << (input[0] + 5) % 10;
       cout <<endl;
    return 0;
}*/


//how to make input together?

//task4.
//ws.cpp

/*#include <iostream>
using namespace std;
bool isPerfect(int n)
{
    int count = 0;
    for(int i = 1; i < n; i++){
        count += (n % i == 0 ? i : 0);
    }
    return ((count == n) ? 1 : 0);
}

int main(void)
{
    for(int i = 1; i < 1001; i++){
        if(isPerfect(i)){
            cout << i << endl;
        }
    }
    return 0;
}
*/
//task6
//dclass.cpp
//2020001-2020100 to A and B

//#include <iostream>
//#include <stdlib.h>
//#include <time.h>
//using namespace std;
//
//void print(long* a, long* b, int n)
//{
//    cout << "Class A"<< "   " << "Class B"<<endl;
//    for(int i =0; i < n;i++)
//    {
//        cout << a[i] << "   " << b[i] <<endl;
//    }
//}
//
//int main(void)
//{
//    srand(time(nullptr));
//    long a[50], b[50];
//    int a_t = 0, b_t = 0;
//    for(long i = 2020001; i < 2020101; i++){
//        if(a_t == 50){
//        for(int j = b_t; j < 50; j++){
//            b[j] = i;
//            i++;
//        }
//        break;
//        }else if(b_t == 50){
//        for(int j = a_t; j < 50; j++){
//            a[j] = i;
//            i++;
//        }
//        break;
//        }
//        if((rand() % 1 == 1){
//            a[a_t] = i;
//            a_t++;
//        }else{
//            b[b_t] = i;
//            b_t++;
//        }
//    }
//    print(a, b, 50);
//    return 0;
//}
//s


#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(void)
{
    srand(time(NULL));
    long a[50], b[50];
    int a_t = 0, b_t = 0;

    for (long i = 2020001; i < 2020101; i++)
    {
        if (a_t == 50)
        {
            for (int j = b_t; j < 50; j++)
            {
                b[j] = i;
                i++;
            }
            break;
        }
        if (b_t == 50)
        {
            for (int j = a_t; j < 50; j++)
            {
                a[j] = i;
                i++;
            }
            break;
        }
        if ((rand() % 2) == 1)
        {
            a[a_t] = i;
            a_t++;
        }
        else
        {
            b[b_t] = i;
            b_t++;
        }
    }

    cout << "Class A\tClass B" << endl;
    for (int i = 0; i < 50; i++)
    {
        cout << a[i] << "\t" << b[i] << endl;
    }
    return 0;
}



