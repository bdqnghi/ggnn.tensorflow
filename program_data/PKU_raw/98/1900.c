int main(int argc, char* argv[])
{
    int n,i,m,count=0,k=0;
	char c[40];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",c);
        m=strlen(c);
		
		count=count+m+1;
		if(count-1>80)
		{
			printf("\n%s",c);
			count=m+1;
			
		}
		else
		{
			if(k==0)
			{
              printf("%s",c);
			  k=1;
			}
			else
			printf(" %s",c);
		}
	}
	return 0;
}