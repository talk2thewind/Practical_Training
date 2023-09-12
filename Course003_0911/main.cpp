//1.peach.cpp
/*#include <iostream>

using namespace std;

int main()
{
    int peach[10];
    peach[0] = 1;
    for(int i = 1; i < 10; i++){
        peach[i] = 2 * (peach[i - 1] + 1);
    }
    cout << peach[9];
    return 0;
}*/

//2.carno.cpp
/*#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
    for(int i = 1100; i < 9989; i++){
        if(i%10 == (i/10)%10&&(i/100)%10==i/1000){
            double tmp = sqrt(i);
            if((int)tmp == tmp)//comversion and isEqual
            {
                cout << i;
                break;
            }
        }else{
            continue;
        }
    }
    return 0;
}*/

//3.pp.cpp
/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

enum{
X = 1,Y,Z,A,B,C
};
int main(void)
{
    vector<int> game = {1, 2, 3, 4, 5, 6};
    do {
        int x = distance(game.begin(), find(game.begin(), game.end(), 1));//function find returns a iterator
        int a = distance(game.begin(), find(game.begin(), game.end(), 4));
        int c = distance(game.begin(), find(game.begin(), game.end(), 6));
        int z = distance(game.begin(), find(game.begin(), game.end(), 3));
        for(int i = 0 ;i < 6; i++){
            cout << game[i];
        }
        cout <<" "<< x << a << c << z <<endl;
        if(x - a == 3||a - x == 3){
            if((x - c == 3 || c - x ==3)&&(c - z ==3 || z - c ==3))//not play with a, demn
            {
                for(int i : game){
                    cout << i << " ";
                }
                break;
            }
        }

    } while (next_permutation(game.begin(), game.end()));
    return 0;
}*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

enum {
    X = 1, Y, Z, A, B, C
};

int main(void) {
    vector<int> game = {X, Y, Z, A, B, C};
    do {
        int x = distance(game.begin(), find(game.begin(), game.end(), X));
        int a = distance(game.begin(), find(game.begin(), game.end(), A));
        int c = distance(game.begin(), find(game.begin(), game.end(), C));
        int z = distance(game.begin(), find(game.begin(), game.end(), Z));

        if ((x - a != 3) && (a - x != 3) && (x - c != 3) && (c - x != 3) && (c - z != 3) && (z - c != 3)) {
            for (int i : game) {
                switch (i) {
                    case X: cout << "X"; break;
                    case Y: cout << "Y"; break;
                    case Z: cout << "Z" << endl; break;
                    case A: cout << "A"; break;
                    case B: cout << "B"; break;
                    case C: cout << "C"; break;
                }
            }
            break;
        }
    } while (next_permutation(game.begin(), game.end()));
    return 0;
}

//4.tranOcttoDec.cpp
/*#include <iostream>
#include <cmath>
using namespace std;

void dec(int oct)
{
    int tmp = oct;
    while(tmp != 0){
        if(tmp % 10 > 7){
            cout << "invalid input";
            return ;
        }
        tmp /= 10;
    }
    int dec = 0, i = 1;
    while(oct != 0)
    {
        dec += (oct%10) * i;
        i *= 8;
        oct /= 10;
    }
    cout << dec;
}

int main(void)
{
    int oct;
    cin >> oct;
    dec(oct);
    return 0;
}*/
//5.nkcs.cpp
/*#include <iostream>
#include <cmath>
using namespace std;

void judge(int n, int head, int tail)
{
    cout << n << " = ";
    for(int i = head; i < tail; i++){
        cout << 2 * i + 1  <<"+";
    }
    cout << 2*tail+1 <<endl;
}

void nkcs(int n)
{
    n = n * n * n;
    //cout <<n;
    //get the cube number
    int tmp = 0;
    int head = 0, tail;
    for(int i = 0;tmp < n; i++){
        tmp += 2 * i +1;
        tail = i;
    }
    //cout << tail;
    if(tmp == n){
        judge(n, head, tail);
        return;
    }
    //27 = 1 + 3 + 5 + 7 + 9 + 11 35-8
    //125 =
    //cout << tmp<<endl;
    tail++;
    while(n != tmp)
    {
        if(tmp < n){

            tmp += (tail * 2 + 1);
            tail ++;
        }
        if(n == tmp){
            break;
        }
        tmp -= (head * 2 + 1);
        head ++;
        //cout << head << endl;
        //cout << tmp << endl;
        //system("pause");
        //cout << (tmp < n) << endl;

    }
    judge(n, head, tail);
}

int main(void)
{
    int n;
    cin >> n;
    nkcs(n);
    return 0;
}*/
