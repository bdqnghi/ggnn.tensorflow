int main()
{
   int n;
   scanf("%d",&n);
   int p[100000][2];
   int i,j,h,a=0,b=0,c=0;
   for(i=0;;i++)
   {  scanf("%d %d",&p[i][0],&p[i][1]);
      if(p[i][0]==0&&p[i][1]==0)
      break;}
   for(j=0;j<n;j++)
   {  a=0;b=0;
      for(h=0;h<i;h++)
      if(p[h][0]==j) {a=1;break;}
      if(a==0)
      {
       for(h=0;h<i;h++)
        if(p[h][1]==j) b=b+1;
       if(b==n-1) {printf("%d\n",j);c=c+1;}
      }
      else continue;            
   }
   if(c==0) printf("NOT FOUND");
 }
