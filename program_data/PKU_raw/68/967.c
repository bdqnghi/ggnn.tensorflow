int main()
{
	int shisushu(int j);
	int n,i,j;
	scanf("%d",&n);
	for(i=6;i<=n;i+=2)
	{
		for(j=2;j<=(i/2);j++)
		{
			if(shisushu(j)&&shisushu(i-j))
			{
				printf("%d=%d+%d\n",i,j,i-j);
				break;
			}
		}
	}
	return 0;
}


int shisushu (int j)
{int i,k;
    k=sqrt((float)j);
    for (i=2;i<=k;i++)
    {if (j%i==0) {break;}}
    if (i>k) {return 1;
    }
    else return 0;
}


