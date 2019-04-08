char x[1000];
int main()
{
    int i,len;
    gets(x+1);
    x[0]='0';
    len=strlen(x+1);
    for(i=1;i<=len;i++)
    {
                      if(isn(x[i])&&!isn(x[i-1]))
                      printf("\n");
                      if(isn(x[i]))
                      printf("%c",x[i]);
    }
   //a getch();
    return 0;
}
