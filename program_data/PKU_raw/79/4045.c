int main()
{
  int dawang(int n,int m);
  int a,b,boss;
  scanf("%d %d",&a,&b);
  while (a!=0)
  {
     boss=dawang(a,b);
  printf("%d\n",boss);
  scanf("%d %d",&a,&b);
  }
//  scanf("\n");
}
int dawang(int n,int m)
{
 int after[400];
 int i,j,pre,t;
 for (i=0;i<n;i++) after[i]=i+1;
 after[n]=1;
 pre=n;
 t=1;
 while (after[pre]!=pre)
 {
    for (i=1;i<m;i++)
    {
      pre=t;
      t=after[pre];
    }
    after[pre]=after[t];
	t=after[pre];
 }
return(t);
}