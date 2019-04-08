int main()
{
    int n,k,i,j,s;
	int num[1000];
	scanf("%d%d", &n,&k);
	for(i=0;i<n;i++)
		scanf("%d", &num[i]);
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			s=num[i]+num[j];
			if(s==k) {s=1;break;}
			s=0;
		}
		if(s==1) break;
	}
	if(s==0) printf("no");
	if(s==1) printf("yes");
	return 0;
}