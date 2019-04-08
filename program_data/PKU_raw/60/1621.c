int main()
{   int n,i,j,m,k,f;
  int a[10000];
  scanf("%d",&n);
if (n>=5)
{  for(i=1;i<=n;i++) a[i]=i;
 for (i=5;i<=n;i++)
 {	
	 k=1;
	for (j=2;j<=i-1;j++)
	{
		if (a[i]%j==0) 
			m=0;
		else 
			m=1;
		k=k*m;
	}
 
 if (k!=0) 
 {
	 f=1;
 for (j=2;j<=i-3;j++)
 {
	 if (a[i-2]%j==0) 
 m=0;
 else m=1;
 f=f*m;
 }
 if (f!=0) 
	 printf("%d %d\n",a[i-2],a[i]);}
}}
else printf("empty");
	return 0;
}