int main()
{
	int a[1000][7],i,sum;
	for(i=1;i<=999;i++)
	{
		sum=0;
		scanf("%d%d%d%d%d%d",&a[i][1],&a[i][2],&a[i][3],&a[i][4],&a[i][5],&a[i][6]);
		if(a[i][1]==0&&a[i][2]==0&&a[i][3]==0&&a[i][4]==0&&a[i][5]==0&&a[i][6]==0)
			break;
		else
		{
			a[i][4]=a[i][4]+12;
			if(a[i][6]-a[i][3]<0)
			{
				sum=a[i][6]-a[i][3]+60;
				a[i][5]=a[i][5]-1;
			}
			else
				sum=a[i][6]-a[i][3];
			if(a[i][5]-a[i][2]<0)
			{
				sum=sum+(a[i][5]+60-a[i][2])*60;
				a[i][4]=a[i][4]-1;
			}
			else
				sum=sum+(a[i][5]-a[i][2])*60;
			sum=sum+(a[i][4]-a[i][1])*3600;
			printf("%d\n",sum);
		}
	}
	return 0;
}