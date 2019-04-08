int main()
{
	int a[300],i=1,j,b,c=0,n;
	scanf("%d",&a[0]);
	while(scanf(",%d",&a[i]))i=i+1;
	b=a[0];
	for(j=0;j<i;j++){
	if(a[j]>b)b=a[j];
	}
	for(n=0;n<i;n++){
	if(a[n]>c&&a[n]!=b)
		c=a[n];
	}
	if(c==0)printf("No\n");
	else
	printf("%d\n",c);
	return 0;
}
