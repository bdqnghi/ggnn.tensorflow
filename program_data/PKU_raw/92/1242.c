void main()
{
	int t[1001];
	int q[1001];
	int n;
	int ts,te,qs,qe;
	int i,j,temp;
	int win,lose,equal;
	for(;;)
	{
	scanf("%d",&n);
	if(n==0)
	{
		break;
	}
	else
	{
	win=lose=equal=0;
	ts=te=qs=qe=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&t[i]);
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&q[i]);
	}
	for(j=0;j<n-1;j++)
	{
		for(i=0;i<n-j-1;i++)
		{
			if(t[i]<t[i+1])
			{
				temp=t[i+1];t[i+1]=t[i];t[i]=temp;
			}
			else{}
			if(q[i]<q[i+1])
			{
				temp=q[i+1];q[i+1]=q[i];q[i]=temp;
			}
		}
	}
	while((lose+equal+win)<n)
	{
		if(t[ts]>q[qs])
		{
			win++;
			ts++;
			qs++;
		}
		else if(t[ts]==q[qs])
		{
			if(t[n-te-1]>q[n-qe-1])
			{
				te++;
				qe++;
				win++;
				continue;
			}
			else if(t[n-te-1]==q[n-qe-1])
			{
				if(t[n-te-1]==q[qs])
				{
					equal++;
					qs++;
					te++;
				}
				else
				{
					lose++;
					qs++;
					te++;
				}
			}
			else
			{
				lose++;
				qs++;
				te++;
			}
		}
		else
		{
				lose++;
				te++;
				qs++;
		}
	}
	}
	printf("%d\n",(win-lose)*200);
	}
}


