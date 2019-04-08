
int main()
{
	int n,k,i,j,h=0,f[10]={0};
	
	scanf("%d%d",&n,&k);
	
	for(j=1;;j++)
	{

		f[0]=n*j+k;
		for(i=0;i<n-1;i++)
			{
				f[i+1]=f[i]*n/(n-1)+k;
			    if( ((f[i+1]-k)*(n-1))%n!=0)
					break;
				if(i==n-2)
				{
					h=1;
					break;
				}
			}
		if(h==1)
			break;
	}
		

	printf("%d",f[n-1]);
	return 0;
}


