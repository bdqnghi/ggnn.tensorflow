struct student
{int id;
int yw;
int sx;
}stu[100000];
void main()
{
	int n,i,sum[100000],temp[3],max;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d %d",&stu[i].id,&stu[i].yw,&stu[i].sx);
		sum[i]=stu[i].yw+stu[i].sx;
	}
	for(i=0,max=-1,temp[0]=0;i<n;i++)
	{
		if(sum[i]>max)
		{
			max=sum[i];
			temp[0]=i;
		}
	}
    for(i=0,max=-1,temp[1]=0;i<n;i++)
	{
		if(i==temp[0])continue;
		else
		{
			if(sum[i]>max)
			{
				max=sum[i];
				temp[1]=i;
			}
		}
	}
    for(i=0,max=-1,temp[2]=0;i<n;i++)
	{
		if(i==temp[0]||i==temp[1])continue;
		else
		{
			if(sum[i]>max)
			{
				max=sum[i];
				temp[2]=i;
			}
		}
	}
	printf("%d %d\n",stu[temp[0]].id,sum[temp[0]]);
    printf("%d %d\n",stu[temp[1]].id,sum[temp[1]]);
	printf("%d %d",stu[temp[2]].id,sum[temp[2]]);
}