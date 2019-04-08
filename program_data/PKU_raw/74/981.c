int check1(int i)
{
	int j,x=0;
	if(i==2) return 1;
	for(j=2;j<i;j++)
		 if(i%j==0) x++;
	if(x==0) return 1;
	else return 0;
}
int check2(int i)
{
	int x,j=0;
	x=i;
	while(i!=0)
	{
		j=j*10+i%10;
		i=i/10;
	}
	if(j==x) return 1;
	else return 0;
}
main()
{
	int m,n,i,j;
	scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++)
		if(check1(i)&&check2(i)) {printf("%d",i);break;}
		else if(i==n) printf("no\n");
	for(j=i+1;j<=n;j++)
		if(check1(j)&&check2(j)) printf(",%d",j);
	printf("\n");
}