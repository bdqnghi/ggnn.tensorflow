
int sushu(int x)
{
	int i,r=1;
	if(x%2==0)r=0;
	for(i=3;i<=sqrt(x);i=i+2)
	{
        if(x%i==0)r=0;
	}
		return r;
}
int main(int argc, char* argv[])
{
	int n,fig,elm1,elm2;
	scanf("%d",&n);
    for(fig=6;fig<=n;fig=fig+2)
	{
		for(elm1=2;elm1<fig;elm1++)
		{
			elm2=fig-elm1;
			if(sushu(elm1)==1&&sushu(elm2)==1)
			{
                printf("%d=%d+%d\n",fig,elm1,elm2);
				break;
			}
		}
	}
	return 0;
}