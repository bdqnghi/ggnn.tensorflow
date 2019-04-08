main()
{
	int n;
	scanf("%d",&n);
	int a[26],f[26];
	for (int i=0;i<=n-1;i++)
		scanf ("%d",&a[i]);
	f[0]=1;
	if(a[1]<=a[0])
	f[1]=2; 
	else
	f[1]=1;
	for (int i=2;i <=n-1;i++)
		{
			int c[26]; 
			for (int q=0;q <=i-1;q++)
			{
				if (a[q]>=a[i])
				c[q]=f[q];
				else 
				c[q]=0;
			}
			int maxc=c[0];
			for (int j=1;j<=i-1;j++)
			{
				if (maxc<c[j])
				maxc=c[j] ;
			}
			f[i]=maxc+1; 
		} 
	int max=f[0];
	for (int m =1;m <=n-1; m++)
		{
			if (f[m]>max)
			max=f[m];
		}
	printf ("%d",max);
}