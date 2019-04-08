int main()
{
	int a[300];
	char c;
	int i,j,k,l,m,n;
	for(i=0;i<300;i++)
	{
		scanf("%d%c",&a[i],&c);
		if(c!=',') {k=i;break;}
	}
	if(k==0){printf("No");}
	else {
    for(i=1;i<=k;i++)
	{
		if(a[i]<a[0]){m=a[0];n=a[i];l=i;break;}
		else if(a[i]>a[0]){m=a[i];n=a[0];l=i;break;}
		else {continue;}
	}
	if(i==k+1) {printf("No");l=k+1;}
	else {
	for(j=l+1;j<=k;j++)
	{
		if(a[j]>m){n=m;m=a[j];}
		else if(a[j]>n&&a[j]<m){n=a[j];}
		else {continue;}
	} 
	printf("%d",n);
	}
	}
	return 0;
}