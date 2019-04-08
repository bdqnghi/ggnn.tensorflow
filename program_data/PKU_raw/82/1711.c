int main()
{
   int n,x,y,i=1,k=0,l=0;
   scanf("%d",&n);
   while(i<=n)
   {
      scanf("%d%d",&x,&y);
      if(x>=90&&x<=140&&y>=60&&y<=90)
         k++;
      else
         k=0;
      if(k>l)
         l=k;
      i++;
   }
   printf("%d",l);
   scanf("%d",&n);
   return 0;
}