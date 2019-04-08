void main()
{
	char a[100]={'\0'},b[100]={'\0'},c[100]={'\0'},d[100]={'\0'},e[100]={'\0'},l;
	int n,i,j,h,k,t;
	scanf("%d\n",&n);
	for(i=1;i<=n;i++)
	{
		t=0;
		gets(a);
		gets(c);
		l=getchar();
	     h=strlen(a)-1;
		for(j=0;j<=h;j++)
		b[j]=a[h-j];
			k=strlen(c)-1;
		for(j=0;j<=k;j++)
		d[j]=c[k-j];
		for(j=k+1;j<=h;j++)
		d[j]='0';
		for(j=0;j<=h;j++)
		{
			if(b[j]>=d[j]) e[j]=b[j]-d[j];
			else {
				e[j]=b[j]+10-d[j];
				b[j+1]=b[j+1]-1;
			}
		}
			for(j=h;j>=0;j--)
			{
			if (e[j]>0) t=t+1;
			if (t>0) printf("%c",e[j]+48);
			}
			printf("\n");
	}
	
	
}
				
			
			
		
		
    
