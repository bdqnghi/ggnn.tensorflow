
struct jumps
{
	int error,c[100],sum,xia;
};

int main()
{
	struct jumps jump[100];
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d ",&jump[i].error);
		for(j=0;j<jump[i].error;j++)
		{
			scanf("%d ",&jump[i].c[j]);
		}
	}
	for(i=0;i<n;i++)
	{
		if(jump[i].c[jump[i].error-1]+jump[i].error*3<60)
			jump[i].xia=60-jump[i].error*3;
		else 
		{
			for(j=0;j<jump[i].error;j++)
			{
				if(jump[i].c[j]>=47&&jump[i].c[j]<=49)
				{
					jump[i].xia=jump[i].c[j];
					break;
				}
				else if(jump[i].c[j]+(j+1)*3>60&&jump[i].c[j-1]+(j)*3<60)
				{
					jump[i].xia=60-(j)*3;
					break;
				}
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",jump[i].xia);
	}
	return 0;
}
