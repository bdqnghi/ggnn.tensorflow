int main()
{
   int n,i,j,a=0;
   int s[200][2],u[100]={0};
   scanf("%d\n",&n);
   for(i=0;i<n;i++)
      {
         for(j=0;j<2;j++)
            {
                scanf("%d",&s[i][j]);
             }
       }
   for(i=0;i<n+1;i++)
      {
          if((s[i][0]>=90)&&(s[i][0]<=140)&&(s[i][1]>=60)&&(s[i][1]<=90))
             u[a]++;
          else a++;
       }
   int b=u[0];
   for(i=0;i<a;i++)
       {
         if(b<u[i])
         b=u[i];
        }
    printf("%d\n",b);
    return 0;
}