int comp1(const void *a ,const void *b)
{
	return *(int*)b-*(int*)a;
}
int comp2(const void *a ,const void *b)
{
	return -*(int*)b+*(int*)a;
}

int main()
{
	long a,t[1002],q[1002],i,j,win=0,ping=0,x=0;
	a=1;
	while(1)
	{
		long t2[1002]={0},q2[1002]={0};
		win=0;ping=0;
		scanf("%d\n",&a);
                  if(a==0)
                      break;
		for(i=1;i<=a;i++)
			scanf("%d",&t[i]);
		for(i=1;i<=a;i++)
			scanf("%d",&q[i]);
		qsort(t+1,a,sizeof(int),comp2);
		qsort(q+1,a,sizeof(int),comp2);
		for(i=1;i<=a;i++)
		{
			for(j=a;j!=0;j--)
			{
				if(t2[i]==0 && q2[j]==0)
				if(t[i]>q[j])
				{
					t2[i]=1;
					q2[j]=1;
					win=win+1;
					break;
				}
			}
		}
		for(i=1;i<=a;i++)
		{
			if(t2[i]==0)
			for(j=1;j<=a;j++)
			{
				if(q2[j]==0)
					if(t[i]==q[j])
					{
						ping=ping+1;
						break;
					}
			}
		}
		printf("%d\n",400*win-200*a+200*ping);
	}	
	return 0;
}