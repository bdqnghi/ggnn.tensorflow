int main()
{
	int n,m,i,j,k;
	int a[300];
	for(k=1;;k++){
	scanf("%d %d\n",&n,&m);
	if(n==0&&m==0)
		break;
	for(i=0;i<n;i++)
		a[i]=i+1;
	i=0;
	while(n!=0)
	{
		i=i+m-1;
	for(j=i%n;j<n-1;j++)
		a[j]=a[j+1];
		i=i%n;
		n--;
	}
	printf("%d\n",a[0]);
	}
	return 0;
}
