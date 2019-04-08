int main()
{
 int n,a[100][21],i,j;
 scanf("%d",&n);
 for(i=0;i<n;i++)
  {
   scanf("%d",&a[i][0]);
   for(j=1;j<=a[i][0];j++)
    scanf("%d",&a[i][j]);
  }
 for(i=0;i<n;i++)
  for(j=0;j<=a[i][0];j++)
   {
    if(a[i][0]==0)
     {printf("60\n"); break;}
     else if(a[i][j]+3*(j-1)>=60) 
       {printf("%d\n",60-3*(j-1)); break;}
       else if(a[i][j]+3*j>=60) 
        {printf("%d\n",a[i][j]); break;}
        else if(a[i][j]+3*j<60&&j==a[i][0])
         {printf("%d\n",60-3*j); break;}
    }
 return 0;
}