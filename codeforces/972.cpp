#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s = "";
        string vowels = "uoiea";
        int pointer = 2;
        if(n>5){
            if(n%5==0){
                int x = 0;
                while(x<5){
                    for(int i=0; i<n/5; i++){
                        s+=vowels[x];
                    }
                    x++;
                }
            }else if(n%5==1){
                int x = 0;
                int cndt = n/5;
                while(x<5){
                    if(x==2){
                        for(int i=0; i<cndt+1; i++){
                        s+=vowels[x];
                        }    
                    }else{
                        for(int i=0; i<cndt; i++){
                            s+=vowels[x];
                        }
                    }
                    x++;
                }
            }else if(n%5==2){
                int x = 0;
                int cndt = n/5;
                while(x<5){
                    if(x==2 || x==3){
                        for(int i=0; i<cndt+1; i++){
                        s+=vowels[x];
                        }    
                    }else{
                        for(int i=0; i<cndt; i++){
                            s+=vowels[x];
                        }
                    }
                    x++;
                }
            }else if(n%5==3){
                int x = 0;
                int cndt = n/5;
                while(x<5){
                    if(x==2 || x==3 || x==1){
                        for(int i=0; i<cndt+1; i++){
                        s+=vowels[x];
                        }    
                    }else{
                        for(int i=0; i<cndt; i++){
                            s+=vowels[x];
                        }
                    }
                    x++;
                }
            }else{
                int x = 0;
                int cndt = n/5;
                while(x<5){
                    if(x==4){
                        for(int i=0; i<cndt; i++){
                        s+=vowels[x];
                        }    
                    }else{
                        for(int i=0; i<cndt+1; i++){
                            s+=vowels[x];
                        }
                    }
                    x++;
                }
            }
        }else{
            for(int i=0; i<n; i++){
                int index = i%5;
                s += vowels[index];
            }
        }
        
        cout<<s<<endl;
        
    }
    return 0;
}