int main()
{
	int a[300],n,m,x,y;
	char b=',';
	for(n=0;b==',';n++)
	{scanf("%d",&a[n]);
	b=getchar();
	}
	m=0;
	x=(a[m]>=a[m+1])?a[m]:a[m+1];
	a[m+1]=(a[m]>=a[m+1])?a[m+1]:a[m];
	m++;
	while(m<n-1)
	{
		if(x<a[m+1]){y=x;x=a[m+1];a[m+1]=y;}
		else if(x==a[m+1]&&x!=a[m]){a[m+1]=a[m];}
		else if(x!=a[m])a[m+1]=(a[m]>=a[m+1])?a[m]:a[m+1];
		m++;
	}
	if(n==1)printf("No");
	else if(x==a[m])printf("No");
	else printf("%d",a[m]);
	return 0;
}