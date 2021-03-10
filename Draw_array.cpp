#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;

void square();
void line();
void triangle();
bool check();

int main() {
    int Width ,Height ;
    cin >>Width >>Height;
    int **a=new int*[Height];
    for(int i=0 ; i<Height ; i++){
        a[i]=new int[Width];
    }
    for(int i=0 ; i<Height ; i++){
        for(int j=0 ; j<Width ; j++){
            a[i][j] = 0;
        }
    }//以上為輸入及劃出畫布範圍

    string type;
    while(true){
        cin >> type;
        if(type == "s")square(a);
        else if (type == "L")line(a);
        else if (type == "T")triangle(a);
        else break;
        //以上為畫圖
        for(int i=0 ; i<Height ; i++){
            for(int j=0 ; j<Width ; j++){
                if(a[i][j] = 0)cout << "*";
                else cout << "x";
            }
            cout << endl;
        }//此為印出結果
    }
}

bool check(int x,int y,int lenx,int leny){
    if( x<lenx && y<leny)){
        return true;
    }
    else return false;
}


void square(int a[][]){
    int len, x, y;
    cin >>len >>x >>y;
    if (check(x+len,y+len,sizeof(a[1])/4,(sizeof(a)/sizeof(a[1]))/4 == false) break;
    for(int i=0 ; i<sizeof(a)/sizeof(a[1]) ; i++){
        for(int j=0 ; j<sizeof(a[1])/4 ; j++){
            if( x<=j && x+len>=j && y<=i && y+len>=i ){
                a[i][j] = 1
            }
        }
    }

}
