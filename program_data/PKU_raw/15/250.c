int main()
{int n,i,j;
 scanf("%d\n",&n);
 int a[n],s=0,m=0,b;
 for(i=0;i<n;i++)
 {
   scanf("%d",&a[0]);
   if(a[0]==0)
   {s=1;}
   else{s=0;}
  for(j=1;j<n;j++)
  {
   scanf(" %d",&a[j]);
   if(a[j]==0)
   {s++;}
  }
   if(s==2)
    {m++;}
    scanf("\n");            
 }
 b=m*m;
 printf("%d\n",b);
return 0;
}