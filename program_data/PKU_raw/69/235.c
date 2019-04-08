int main (){
    int w,p,carry=0,x,y,n0=0,result[260];
    char a[260],b[260];
    gets(a);
    gets(b);
    memset(result,0,sizeof(result));
    w=strlen(a)<=strlen(b)?strlen(a):strlen(b);
    p=strlen(a)>=strlen(b)?strlen(a):strlen(b);
    for ( int i = 0 ; i < p ; i++){
        if (i<=w-1){
        x=a[strlen(a)-1-i]-'0';
        y=b[strlen(b)-1-i]-'0';
        }
        else {
                    if(strlen(a)<=strlen(b)){
                    x=0;
                    y=b[strlen(b)-1-i]-'0';
                    }
                    else {
                    x=x=a[strlen(a)-1-i]-'0';
                    y=0;
                    }
        }
        if (x+y+carry>=10){
        result[i]=x+y+carry-10;
        carry=1;
        }
        else {
        result[i]=x+y+carry;
        carry=0;
        }
        if(i==p-1&&carry==1){
        result[i+1]=carry;
        }
    }
    if (carry==1){
    p++;
    }
    for (int j=p-1;j>=0;j--){
    if(result[j]==0){
        n0++;
        for (int q=p-1;q>=j;q--){
        if (result[q]!=0){
        printf("%d",result[j]);
        break;
        }
        }
    }
    else{
    printf("%d",result[j]);
    }
    if(n0==p){
    printf("%d",result[j]);
    }
    }
return 0;
}