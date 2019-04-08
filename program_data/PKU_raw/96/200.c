int main()
{
    char a[101];
    gets(a);
    if(((a[0]-'0')*10+a[1]-'0')<13&&a[2]=='\0')
    {printf("0\n");puts(a);}
    else
{
    char b[101];
    int x=a[0]-'0';
    int i;
    for(i=0;a[i+1]!='\0';i++)
    {
            b[i]=(x*10+a[i+1]-'0')/13+'0';
            x=(x*10+a[i+1]-'0')%13;
    }
    b[i]='\0';
    if(b[0]=='\0') printf("0\n");
    else if(b[0]=='0') 
    {
                  for(i=0;b[i]!='\0';i++) 
                  b[i]=b[i+1];
                  b[i]='\0';
                  puts(b);
    }                        
    else
    puts(b);
    printf("%d",x);
}
    getchar();getchar();getchar();
}