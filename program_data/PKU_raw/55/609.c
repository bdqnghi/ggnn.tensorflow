long int form (char* num,int j)
{
     int n=0,i,w=0,l;
     l=strlen (num);
     for(i=l-1;i>=0;i--)
     {
                        if(isdigit(num[i]))
                        w=num[i]-'0';
                        else if (isalpha(num[i]))
                                 {
                                                 if(islower(num[i]))
                                                 num[i]=toupper(num[i]);
                                                 w=num[i]-'A'+10;
                                 }
                              n+=w*(int)pow(j,l-1-i);
     }
    return n;
}
int reform(long int n,char*num,int b)
{
    int y,w,i;
    for (i=0;n>=b;i++)
    {
        y=n%b;
        n=n/b;
        num[i]=y<10?'0'+y:'A'+y-10;
        }
        
      num[i]=n<10?'0'+n:'A'+n-10;  
        
        
     return i;
     }   
int main()
{
    long int n=0;
    int a,b,l,i;
    char num1[100];
    scanf("%d %s %d",&a,num1,&b);
    n=form(num1,a);
    l=reform(n,num1,b);
    for(i=l;i>=0;i--)
    {
                     printf("%c",num1[i]);
                     }
        return 0;
}
