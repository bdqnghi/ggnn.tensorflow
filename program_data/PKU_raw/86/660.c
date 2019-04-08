
int main()
{
	int i,j,n,f,brk[100],num[100],t[100],bkt[10];

	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		scanf("%d",&brk[i]);
		if(brk[i]==0)
		{
			num[i]=60;
			continue;
		}
		num[i]=0;
		t[i]=0;
		f=0;
		for(j=0;j<brk[i];j++)
		{
			scanf("%d",&bkt[j]);
			if(f==0)
			{
				t[i]+=3+bkt[j];
				num[i]+=bkt[j];
				if(j!=0)
				{
					t[i]-=bkt[j-1];
					num[i]-=bkt[j-1];
				}
				if(t[i]>=63)
				{
					num[i]-=t[i]-63;
					f=1;
				}
				else if(t[i]>=60)
					f=1;
			}
		}
		if(t[i]<60)
		{
			num[i]+=60-t[i];
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",num[i]);
	}

	return 0;
}
