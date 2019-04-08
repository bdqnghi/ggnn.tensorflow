int main()
{
    static char n[100];
    int d=0;
    scanf("%s",n);
    int len=strlen(n);
    int a=n[0]-'0',i,b,c;
    if(len==1)
    {
    printf("0\n");
    printf("%c\n",n[0]);
    }
    else{ 
    if(len==2&&(n[0]-'0')==1&&(n[1]-'0')<3)
    {
    printf("0\n");
    printf("%c",n[0]);
    printf("%c",n[1]);
    }
    else{
    for(i=0;i<len-1;i++)
    {
    b=n[i+1]-'0';
    c=a*10+b;
    d=c/13;
    if(i==0&&d==0); 
    else  
    printf("%d",d);
    a=c-d*13;
    } 
    printf("\n");
    printf("%d\n",a);
    }
    }
}
