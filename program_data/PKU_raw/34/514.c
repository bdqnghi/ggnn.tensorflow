
int main(int argc, char* argv[])
{
	int n;
	int m;
	scanf("%d",&n);
	for(int i=1;i<100;i++)
		{
			if(n==1)
			{
				printf("End");
				break;
			}
			else
			{
			if(n%2==1)
			{
				m=n*3+1;
				printf("%d*3+1=%d\n",n,m);
				n=m;
				m=0;
			}
			if(n%2==0)
			{
				m=n/2;
				printf("%d/2=%d\n",n,m);
				n=m;
				m=0;
			}
			}
		}
	
    return 0;
}
