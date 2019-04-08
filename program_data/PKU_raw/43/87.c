
int main()
{
	int flag[SIZE]={0};
	int i,j,r,num;	
	for(i=3;i<32767;i++)
	{
		if(i%2==1)
		{
			for(j=2;j<=sqrt(i);j++)
			{
				r=i%j;
				if(r==0)
				{
					break;
				}
			}
			if(r!=0)
			{
				flag[i]=1;
			}
		}
	}
	scanf("%d",&num);
	for(i=3;i<=num/2;i++)
	{
		if(flag[i]==1&&flag[num-i]==1)
		{
			printf("%d %d\n",i,num-i);
		}
		i++;
	}
	return 0;
}