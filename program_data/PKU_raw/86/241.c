int main(int argc, char* argv[])
{
    int n,i,j,pause,t,number[60],total;
	scanf("%d",&n);
	for (j=0;j<n;j++)
	{
		scanf("%d",&pause);
		if (pause==0)
		{
			total=60;
		}
		else
		{
			for (i=1;i<=pause;i++)
			{
				scanf("%d",&number[i]);
			}
			for (i=1;i<=pause;)
			{
				t=number[i]+3*(i-1);
				if (t+3<60)
				{   total=57-3*(i-1);
					i=i+1;
				}
				if (t<60&&t+3>=60)
				{
					total=number[i];
					break;
				}
				if (t>=60)
				{
					total=63-3*i;
					break;
				}
			}
		}
		printf("%d\n",total);
	}
	
	return 0;
}
