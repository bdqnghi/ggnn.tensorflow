int main()
{
 int i, num, s, a[101];
 while(1)
 {
   scanf("%d",&s);
   if(s==-1) break;
   num=0;
   for(i=0;i<101;i++)
     a[i]=0;
   a[s]=1;
   while(scanf("%d",&s)==1&&s!=0)
     a[s] = 1;
   for(i=0;i<50;i++)
    if(a[i]==1&&a[2*i]==1)
     num++;
     printf("%d\n",num);
 }
  return 0;
}