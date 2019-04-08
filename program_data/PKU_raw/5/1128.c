int main(){
    double a,c=0;
    int i,n,b=0;
    char q[500],w[500],num[50];
    gets(num);
    a=atof(num);
    gets(q);
    gets(w);
    n=strlen(q);
    for(i=0;i<n;i++){
        if(q[i]!='A'&&q[i]!='T'&&q[i]!='C'&&q[i]!='G'){
            b++;
        }
        if(w[i]!='A'&&w[i]!='T'&&w[i]!='C'&&w[i]!='G'){
            b++;
        }
    }
    if(b!=0){
        printf("error");
    }else{
        for(i=0;i<n;i++){
            if(q[i]==w[i]){
                c++;
            }
        }
        c=c/n;
        if(c>a){
            printf("yes");
        }else{
            printf("no");
        }
    }
    return 0;
}





