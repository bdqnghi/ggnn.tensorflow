int main()
{
	int sumA=0,sumB=0,i;
	int n,a,b;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d%d",&a,&b);
		if((a==0&&b==1)||(a==1&&b==2)||(a==2&&b==0))
			sumA++;
		if((b==0&&a==1)||(b==1&&a==2)||(b==2&&a==0))
			sumB++;
		if((a==0&&b==0)||(a==1&&b==1)||(a==2&&b==1))
			continue;
	}
	if(sumA>sumB)
		printf("A");
	if(sumB>sumA)
		printf("B");
	else if(sumA==sumB)
		printf("Tie");
	return 0;
}