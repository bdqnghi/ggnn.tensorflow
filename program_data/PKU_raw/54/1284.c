int n,k;
int wa(int p,int q)
{
   if (p == 0)
     return q;
   if(q%(n-1)==0)
     return wa(p-1,q/(n-1)*n+k);
    else return 0;
}
int main()
{
    int i,sum=0;
    scanf("%d%d",&n,&k);
    i=n-1;
    while(!sum)
    {
        sum=wa(n,i);
        i++;
    }
    printf("%d",sum);
    
 return 0;    
}
