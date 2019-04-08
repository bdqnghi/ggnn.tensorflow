int main(int argc, char* argv[])
{
	int i,n;
	int t;
	int max,secondmax;
	scanf("%d%d",&n,&t);
	max=secondmax=t;
	for(i=1;i<n;i++)
	{
		scanf("%d",&t);
		if((t<max)&&(t>secondmax))
        {
			secondmax=t;
		}
		else 
			if(t>max)
		{
			secondmax=max;
            max=t;
		}
	}
	printf("%d\n%d",max,secondmax);
	return 0;
}