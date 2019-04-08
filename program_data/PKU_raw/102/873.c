int main()
{
	int n,i,j1,j2,j;
	double a[50],b[50],c[50];
	char xb[50][10];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %lf",&xb[i],&a[i]);
	}
	j1=0;
	for(i=0;i<n;i++)
	{
	 if(strcmp(xb[i],"male")==0) {b[j1]=a[i];j1++;}
	}
	j2=0;
	for(i=0;i<n;i++)
	{
	 if(strcmp(xb[i],"female")==0) {c[j2]=a[i];j2++;}
	}
	for(i=j1-1;i>0;i--)
	{
		for(j=0;j<i;j++)
		{
			if(b[j]>b[j+1])
			{
				double t1;
				t1=b[j];
				b[j]=b[j+1];
				b[j+1]=t1;
			}
	    }
	}
	for(i=0;i<j1;i++)
	printf("%.2lf ",b[i]);
	for(i=j2-1;i>0;i--)
	{
		for(j=0;j<i;j++)
		{
			if(c[j]>c[j+1])
			{
				double t2;
				t2=c[j];
				c[j]=c[j+1];
				c[j+1]=t2;
			}
	    }
	}
	for(i=j2-1;i>0;i--)
	printf("%.2lf ",c[i]);
         printf("%.2lf",c[0]);
	scanf("%d",&i);
	return 0;
}

 