int a[251],b[251];
int c[251];
int al,bl,cl,i;
void sr(){
    int s;
    for(s=0;s<=250;s++){
        a[s]=b[s]=c[s]=0;
    }
    for(al=0;(a[al]=(getchar()-'0'))!=('\n'-'0');al++){
    }a[al]=0;
    for(bl=0;(b[bl]=(getchar()-'0'))!=('\n'-'0');bl++){
    }b[bl]=0;
}
void addit(){
    int k;
    for(cl=1;(cl<=al)||(cl<=bl);cl++){
        k=c[cl-1];
        if(cl<=al) k+=a[al-cl];
        if(cl<=bl) k+=b[bl-cl]; 
        if(k>9){
            k-=10;
            c[cl]++;
        }        
        c[cl-1]=k;
    }
}
void sc(){
    int sign=0,m;cl--;
    for(m=0;m<=250;m++){
        if(c[250-m]!=0){
            cl=251-m;break;
        }
    }
    for(m=0;m<cl;m++){
        cout<<c[cl-m-1];
    }
}
int main(){
    sr();
    addit();
        sc();
    
    return 0;
}
