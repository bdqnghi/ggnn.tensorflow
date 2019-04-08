int main()
{
	int k,m,i,n,flag1=0,flag2=0,j;
	scanf("%d",&n);
	for(i=3;i<n;i++)
	{
		flag1=flag2=0;
		for(m=2;m<i;m++){if(i%m!=0)flag1++;}
		if(flag1!=i-2)continue;
		j=n-i;
		for(k=2;k<j;k++){if(j%k!=0)flag2++;}
		if(flag2!=j-2)continue;
		if(i<=j)printf("%d %d\n\n",i,j);
	}
	return 0;
}