int f1(int x)
{   int c=0;
    for(int i=2;i<=sqrt(x);i++)
    if(x%i==0)
    c++;
    return c;
}
int f2(int x)
{
    int a,b=0;
    while(x>0)
    {
          a=x%10;
          b=b*10+a;
          x=x/10;    
    }
    return b;
    
}
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    
    int hs[1000];
    int d=0;
    for(int i=m;i<=n;i++)
    {
          if(f1(i)==0&&f2(i)==i)  
            
        
          {hs[d]=i;
          d++;}
          
    }
    if(d==0)
    printf("no");
    else
    {
        printf("%d",hs[0]);
        for(int p=1;p<d;p++)
        printf(",%d",hs[p]);
    }
 }
