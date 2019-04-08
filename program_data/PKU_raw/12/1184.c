
int main()
{
	int a[16],sign=1,i,j,k,num;
	for(;;)
	{
		num=0;
		for(i=0;;)
		{
			scanf("%d",&a[i]);
			sign=a[i];
			if(sign==0||sign==-1)break;
			else i++;
		}
		if(sign==-1)break;
		else
		{
			for(j=0;j<i;j++)
			{
				for(k=j+1;k<i;k++)
				{
					if(a[k]==2*a[j]||a[j]==2*a[k])num++;
				}
			}
			printf("%d\n",num);
		}
	}
	return 0;
}