int main()
{
	int i,n,a[6],b[6]={100,50,20,10,5,1};
	scanf("%d",&n);
	for(i=0;i<6;i++){
		a[i]=n/b[i];
		n=n%b[i];
	}
	for(i=0;i<6;i++){
		printf("%d\n",a[i]);
	}
	return 0;
}
