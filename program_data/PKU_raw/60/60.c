void main()
{
	int n,i=1,m,k,c,j=0,t,a[1000]={0},b[1000]={0};
	scanf("%d",&n);
	for(k=3,c=k+2;c<=n;k++,c++)
	{
		for(i=2,m=2;i<k/2,m<c/2;i++,m++)
		if(k%i==0||c%m==0)break;
		if(k%i!=0&&i>=k/2&&c%m!=0&&m>=c/2){a[j]=k;b[j]=c;t=j;j++;}
	}
	for(i=0;i<=t;i++)
		if(a[0]!=0)printf("%d %d\n",a[i],b[i]);
	if(a[0]==0)printf("empty");
}

