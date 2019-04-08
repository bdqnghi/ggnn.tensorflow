int x[100],y[100];
int main()
{
	int n,i,j,hour,maxhour;
	hour=0;
	maxhour=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d %d\n",&x[i-1],&y[j-1]);
			if(x[i-1]>=90&&x[i-1]<=140&&y[j-1]>=60&&y[j-1]<=90)
			{
			hour++;
			}else{
				if(maxhour<hour)
				{maxhour=hour;
			}hour=0;
			}
		}
	}
	if(maxhour<hour)
	{maxhour=hour;
	}
	printf("%d",maxhour); 
return 0;
} 