int reverse(int num)
{
  int n,i,b=0,a,c=0;
  if(num==0) return 0;
  else if(num<0)
  {
   for(i=1;num/i!=0;i=i*10)
   {
     a=num%(10*i)/i;
     if (a==0&&c==0) continue;
     b=b*10+a;
     c++;
    }
  return b;
  }
  else
  {
   for(i=1;num/i!=0;i=i*10)
   {
     a=num%(10*i)/i;
     if (a==0&&c==0) continue;
     b=b*10+a;
     c++;
    }
  return b;
 }
}
int main()
{
 int i,num,res;
 for(i=1;i<=6;i++)
 {
  scanf("%d",&num);
  res=reverse(num);
  printf("%d\n",res);
 }
 return 0;
}
   