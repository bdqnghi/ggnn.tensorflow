int main(int argc, char* argv[])
{
	char a[20],g[20],d,e;
	int b,c,f,n,sum=0,max=0,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		int sum1=0;
		scanf("%s %d %d %c %c %d",a,&b,&c,&d,&e,&f);
        if(b>80&&f>=1) sum1+=8000;
		if(b>85&&c>80) sum1+=4000;
		if(b>90) sum1+=2000;
		if(b>85&&e=='Y') sum1+=1000;
		if(c>80&&d=='Y') sum1+=850;
		sum+=sum1;
		if(sum1>max) 
		{
			max=sum1;
			for(j=0;j<20;j++)
			{
				g[j]=a[j];
			}
		}
	}
	printf("%s\n%d\n%d\n",g,max,sum);
	return 0;
}