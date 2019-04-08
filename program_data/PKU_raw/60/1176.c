int main(){
	int sushu[2],i,j,k=0,n,flag,fl=0;
	scanf("%d",&n);
	for (i=3;i<=n;i++)
		{
		flag=1;
		for (j=2;j<=i/2;j++)
			if (i%j==0)
			{
				flag=0;
				break;
			}
		if (flag)
			{
			sushu[k]=i;
			k=k+1;
			}
		if (k==2)
		{
			if (sushu[0]+2==sushu[1])
				{
				printf("%d %d\n",sushu[0],sushu[1]);
				fl=1;
				}
			sushu[0]=sushu[1];
			k=1;
		}

		}
	if (fl==0)
		printf("empty");
	return 0;
}