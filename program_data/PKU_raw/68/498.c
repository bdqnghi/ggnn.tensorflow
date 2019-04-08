

void main()
{
int tashisushu(int x);
int n,fenjie,i;
scanf("%d",&n);
for(i=6;i<=n;i+=2)
	{
	for(fenjie=2;fenjie<=(i/2);fenjie++)
		{
		if(tashisushu(fenjie)+tashisushu(i-fenjie)==2)
			{
			printf("%d=%d+%d\n",i,fenjie,i-fenjie);
			break;
			}
		}
	}
}


int tashisushu(int x)
{
int i=2,c=1;
for(i;i<=sqrt(x);i++)
	{
	if(x%i==0)
		{
		return 0;
		c=0;
		break;
		}
	}
if(c==1)
	return 1;
}
