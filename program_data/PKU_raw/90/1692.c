int ghl(int p,int q,int r) //r??????? ?q????????????p?????? 
{
   int i,s=0;
   if(r==0 && p!=0) return 0;
   if(p==0) return 1;
   for(i=p;i>=1;i--)
     if(i<=q)
       s+=ghl(p-i,i,r-1);    
    return s;
}
int main()
{
  int m,n,t,sum,i;
  scanf("%d",&t);
  for(i=1;i<=t;i++)
  {
    scanf("%d%d",&m,&n);
    sum=ghl(m,m,n);
    printf("%d\n",sum);
  }
 return 0;    
} 
