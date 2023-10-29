#include<bits/stdc++.h>
using namespace std;

int top = -1;
int ss = 100;
char st[100];
char cst[100];
int delhi , stop = -1;
char item , del;
void push(){
    if(top == ss -1){
        cout<<"Stack Overflow"<<endl;
    }else{
        top++;
        st[top]=item;
    }
}

char pop(){
        del = st[top];
        top--;
        cout<<del<<st[0]<<endl;
        return del;
}

void checkpush(){
    stop++;
    cst[stop]=pop();
}

int main(){
    int count = 0;
    string k;
    cin>>k;
    // cout<<k[0]<<endl;
    // item = k[0];
    // cout<<item;
    item = k [0];
    push();
    pop();
    checkpush();
    // for(int i = 0 ; i < k.length() ; i++){
    //     item = k[i];
    //     push();
    //     pop();
    //     checkpush();
    // }
    for(int j = 0 ; j < k.length() ; j++){
        if(cst[j] == st[j]){
            count++;
        }
    }

    
    // if(count == k.length()){
    //     cout<<"PALINDROME"<<endl;
    // }
    // else{
    //     cout<<"NOT A PALINDROME"<<endl;
    // }
    
    return 0;
}