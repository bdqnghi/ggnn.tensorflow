int main(){   
    int n,l,i,an[1000];   
    int *p;   
    cin>>n>>l;   
    for(i = 0;i < n;i ++){   
        cin>>an[i];   
    }   
    p = an + n - l;   
    do{   
        cout<<*p<<" ";   
        p ++;   
        if(p > an + n - 1){   
            p = an;   
        }   
        if(p == an + n - l-1){   
            break;   
        }   
    }while(p <= an + n -1);   
    cout<<*(an+n-l-1)<<endl;   
    return 0;   
}