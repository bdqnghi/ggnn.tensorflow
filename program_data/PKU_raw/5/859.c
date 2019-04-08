int main(){
    int k=0,n;
    double m;
    char a[501],b[501];
    scanf("%lf",&m);
    scanf("%s\n%s",a,b);
    n=strlen(a);
    if(strlen(a)!=strlen(b)){printf("error");return 0;}
    
    for(int i=0;a[i]!='\0';i++){
        if(a[i]!='A'&&a[i]!='T'&&a[i]!='C'&&a[i]!='G'){printf("error");return 0;}
        if(b[i]!='A'&&b[i]!='T'&&b[i]!='C'&&b[i]!='G'){printf("error");return 0;}
       if(a[i]==b[i]){k++;} 
    }
    if(1.0*k/n>m){printf("yes");}
    else{printf("no");}
    return 0;
}
