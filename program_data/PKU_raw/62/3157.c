int main(){
    char s[201],q[201];
    int i=0,j=0;
    gets(s);
    while(s[j]){
        if(s[j]!=' '||(s[j]==' '&&s[j-1]!=' '))
       {q[i]=s[j];
        i=i+1;}
        j=j+1;
    }
    q[i]='\0';
    printf("%s",q);
    return 0;
    
}
