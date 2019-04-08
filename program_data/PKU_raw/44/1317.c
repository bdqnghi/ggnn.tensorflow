
int reverse(int num)
{
	int i,j,k,c,N,renum;
	for(i=0;c!=0;i++)
		c=num/pow(10,i);
	int a[20];
	a[0]=num/pow(10,i-1);
	N=num;
	for(j=1;j<i;j++){
		a[j]=(N-a[j-1]*pow(10,i-j))/pow(10,i-j-1);
		N-=a[j-1]*pow(10,i-j);
	}
	renum=0;
	for(j=i-1,k=0;j>=0,k<i;j--,k++)
		renum+=a[j]*pow(10,i-k-2);
	return renum;
}

main()
{
	int i;
	int a[6];
	for(i=0;i<6;i++)
		scanf("%d",&a[i]);
	for(i=0;i<6;i++)
		printf("%d\n",reverse(a[i]));
}