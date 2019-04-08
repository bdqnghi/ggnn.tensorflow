int main(){
    char a[501],b[501],ratio[20];
    double r,R;
    int i,c;
    gets(ratio);
    r=atof(ratio);
    gets(a);
    gets(b);
    if(strlen(a)!=strlen(b)){
        printf("error");
        return 0;
    }
    for(i=0;a[i]!='\0';i++){
        if((a[i]!='A'&&a[i]!='G'&&a[i]!='C'&&a[i]!='T')||(b[i]!='A'&&b[i]!='G'&&b[i]!='C'&&b[i]!='T')){
            printf("error");
            return 0;
        }
    }
    c=0;
    for(i=0;a[i]!='\0';i++){
        if(a[i]==b[i]){
            c=c+1;
        }
    }
    R=(1.0*c)/strlen(a);
    if(R>=r){
        printf("yes");
    }else{
        printf("no");
    }
    return 0;
}