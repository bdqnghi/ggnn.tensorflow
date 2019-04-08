
int main(int argc, char* argv[])
{
    int n,i=3,a;
	int max,sec;

	scanf("%d",&n);

	scanf("%d",&a);
	max=a;

	scanf("%d",&a);
	if (a>max)
	{
		sec=max;
		max=a;
	}
	else 
	{
		sec=a;
	}




	for (i=3;i<=n;i++)
	{
		scanf("%d", &a);
	    if (a>max)
		{
			sec=max;
			max=a;
		}
		else if(a>sec)
		      {
		    	sec=a;
		      }
	}
	printf("%d\n%d\n",max,sec);


	    
	return 0;
}

