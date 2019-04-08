int wtf(int p,int a);
int main()
{
int n,i,a,p;
scanf("%d",&n);
for(i=0;i<n;i++)
{
  scanf("%d",&a); 
  printf("%d\n",wtf(2,a));                  
}    
return 0;    
}

int wtf(int p,int a)
{  
    int i,ways=0,j=0; 
    int m=(int)sqrt(a);        
    for(;p<=m;p++)    
        {if(a%p==0 && a>=p*p )    {ways=ways+wtf(p,a/p);j++;}}     
    if(j==0)
    return 1;
    else 
    return ways+1;
}
