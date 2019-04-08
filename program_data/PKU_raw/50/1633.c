
int main(int argc, char* argv[])
{
	int n=0,sz[12]={31,28,31,30,31,30,31,31,30,31,30,31},sz1[12]={0};
	int i=0,j=0;
	sz1[0]=13;
	scanf("%d",&n);
	for(i=1;i<12;i++)
	{
		for(j=0;j<i;j++)
		{sz1[i]=sz1[i-1]+sz[j];}
	}
		for(i=0;i<12;i++)
		{
			if((n-1+sz1[i]%7)==5||(n-8+sz1[i]%7)==5)
				printf("%d\n",i+1);
		}
	return 0;
}
