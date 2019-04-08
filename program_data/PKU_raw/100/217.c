void main()
{
	int n,a[999]={0},k=0,b[999]={0},i,m,p,j,q;
	while((n=getchar())!='\n')
	{
		if(n<='z'&&n>='a')
		{
			for(i=0;i<k;i++)
			{
				if(a[i]==n){b[i]++;break;}
			}
			if(i==k){a[i]=n;b[i]++;k++;}
		}
	}
	if(k==0)printf("No");
	else for(j=1;j<=k;j++)
	{
		m=199;
		for(i=0;i<=k-1;i++)
		{
			if(a[i]<m){m=a[i];p=b[i];q=i;}
		}
		printf("%c=%d",m,p);
		a[q]=200;
		if(j!=k)putchar('\n');
	}
}

