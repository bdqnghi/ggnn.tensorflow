int main()
{
    long a,b,i,n=0,t=0,sum;
    char s[1000];
    long q[1000]; 
    char p[1000];
    char m[1000];
    scanf("%d %s %d",&a,s,&b);
    for(i=0;s[i]!='\0';i++)
    n=n+1;
    for(i=0;i<=n-1;i++)
    {
    if(s[i]>='a'&&s[i]<='z')            
    s[i]=s[i]-'a'+10;
    if(s[i]>='0'&&s[i]<='9') 
    s[i]=s[i]-'0';                       
    if(s[i]>='A'&&s[i]<='Z')
    s[i]=s[i]-'A'+10;                          
    }
    sum=1;
    for(i=n-1;i>=0;i--)
    {  
    t=s[i]*sum+t;
    sum=sum*a;            
    }
if(t==0)
printf("0");
    q[0]=t;
    for(i=0;q[i]!=0;i++)
       q[i+1]=q[i]/b;      
    for(i=0;q[i]!=0;i++)
    {
      p[i]=q[i]%b;
      if(p[i]>9)
      p[i]=p[i]-10+'A';     
      else
      p[i]=p[i]+'0'-0;
    }
    p[i]='\0';
    n=0;
    for(i=0;p[i]!='\0';i++)
       n=n+1;
    for(i=0;i<=n-1;i++)
    m[i]=p[n-i-1];
    m[n]='\0';
    printf("%s",m);
    getchar();
    getchar();
}