int main()
{
	int i,j,k,a[16],num;
	while(scanf("%d",&a[0]),a[0]+1)
	{
		i=1;
		num=0;
		while(scanf("%d",&a[i]),a[i])
		{
			i++;
		}
		for(j=0;j<i;j++)
		{
			for(k=j+1;k<i;k++)
			{
				if(a[j]==2*a[k]||a[k]==2*a[j])
				{
					num++;
				}
			}			
		}
		printf("%d\n",num);
	}
	return 0;
}