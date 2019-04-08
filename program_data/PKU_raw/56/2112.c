int main(){
    char ch[6];
    char c;
    int j,k,n=0;
    do
    {
         n++;
         ch[n-1]=getchar();
    }while(ch[n-1]!='\n');
    n--;
    for(j=0;j<n/2;j++)
    {
        c=ch[j];
        ch[j]=ch[n-1-j];
        ch[n-1-j]=c;
    }
    for(k=0;k<n;k++)
       putchar(ch[k]);
    return 0;
}