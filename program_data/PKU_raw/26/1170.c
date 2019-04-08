int main(){
    char s[101];
    char *p,*q;
    int i;
    gets(s);
    p=s;
    while(*p!='\0'){
        if(*p==' '){
            q=p+1;
            if(*q==' '){
                *p='!';
            }
        }
        p++;
    }
   
    i=0;
    while(s[i]!='\0'){
        if(s[i]!='!') printf("%c",s[i]);
        i++;
    }

    return 0;
}

