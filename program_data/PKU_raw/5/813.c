int main(){
    double n;
    int num=0,pan=1;
    char s;
    char s1[600],a1[600];
    gets(&s);
    n=atof(&s);
    gets(s1);
    gets(a1);
    for(int i=0;i<strlen(s1);i++){
        if(s1[i]!='A'&&s1[i]!='C'&&s1[i]!='G'&&s1[i]!='T'){
                pan=0;
        }
    }
    for(int i=0;i<strlen(a1);i++){
        if(a1[i]!='A'&&a1[i]!='C'&&a1[i]!='G'&&a1[i]!='T'){
            pan=0;
        }
    }
    if(strlen(s1)!=strlen(a1))
        pan=0;
    else if(strlen(s1)==strlen(a1)&&pan!=0){
        for(int i=0;i<strlen(s1);i++){
            if(a1[i]==s1[i])
                num++;
        }
        if(1.0*num/strlen(s1)<n)
            printf("no");
        else printf("yes");
    }
    if(pan==0)
        printf("error");
        return 0;
}