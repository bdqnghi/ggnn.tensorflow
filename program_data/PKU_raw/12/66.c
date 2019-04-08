int main()
{
	int n[10000],m[15];
	int *p;
	int i,j,k=0,total,all=0,sum=0,q,t;
	p=&n[0];
	for(i=0;;i++)
	{
		scanf("%d",&n[i]);
		if(n[i]==0)
		{
			all++;
		}
		if(n[i]==-1)
		{
			break;
		}
	}
	while(all>0)
	{
		for(i=0,t=0;n[k]!=0;i++,k++)
		{
			m[i]=n[k];
			t++;
		}
		k=k+1;
		total=0;
		for(q=0;q<t;q++)
		{
			for(j=0;j<t;j++)
			{
				if((m[q]/m[j]==2)&&(m[q]%m[j]==0))
				{
					total++;
				}
			}
		}
	    printf("%d\n",total);
		all--;
	}
	return 0;
}