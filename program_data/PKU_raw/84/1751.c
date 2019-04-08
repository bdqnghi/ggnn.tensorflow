int main(int argc, char* argv[])
{
	int n;
	int fir,sen;
	int x,i;
	scanf("%d\n",&n);
	if(n>1&&n<100)
	{
		if(n==1)
		{
			int a;
			scanf("%d",&a);
			fir = sen=a;
		}
		else{
			for(i=0;i<n;i++)
			{
		       scanf("%d",&x);
				if(i==0)
				{			
					fir=x;
					sen=0;
				}
				else
				{
					if(fir<x)
					{
						sen=fir;
						fir=x;						
					}
				    else if(sen<x)
					{
					    fir=fir;
					    sen=x;
					}
				}
			
			}
		}
		printf("%d\n%d",fir,sen);
	}
	return 0;
}