int main()

{
  int i,j,n,k,a[100],shousuo,shuzhang;
  scanf("%d\n",&n);
  j=0;
  k=0;
  for(i=0;i<n;i++) a[i]=0;
  for(i=1;i<=n;i++)
  {
		scanf("%d%d",&shousuo,&shuzhang);
		if(90<=shousuo&&shousuo<=140)
		{
		   if(60<=shuzhang&&shuzhang<=90)
				a[j]=a[j]+1;
		   else
		   	   j=j+1;
		   

		}
		
		else
		j=j+1;
		
  }
  for(i=0;i<n;i++)
  {
    if(k<a[i]) k=a[i];
  }
  printf("%d\n",k);
}