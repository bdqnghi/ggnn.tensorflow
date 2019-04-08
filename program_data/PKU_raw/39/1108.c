 
int main()
{
	int n,i,sum=0,k=0,t;
	struct point{char name[21],ganbu,xibu;int x,y,z,money;}stu[100];
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
        scanf("%s %d %d %c %c %d",stu[i].name,&stu[i].x,&stu[i].y,&stu[i].ganbu,&stu[i].xibu,&stu[i].z);
		stu[i].money=0;
		if(stu[i].x>80&&stu[i].z>0)
		{
            stu[i].money+=8000;
			sum+=8000;
		}
		if(stu[i].x>85&&stu[i].y>80)
		{
            stu[i].money+=4000;
			sum+=4000;
		}
		if(stu[i].x>90)
		{
            stu[i].money+=2000;
			sum+=2000;
		}
		if(stu[i].x>85&&stu[i].xibu=='Y')
		{
            stu[i].money+=1000;
			sum+=1000;
		}
		if(stu[i].y>80&&stu[i].ganbu=='Y')
		{
            stu[i].money+=850;
			sum+=850;
		}
	}
	for(i=0;i<n;i++)
	{
		if(stu[i].money>k)
		{
			k=stu[i].money;
			t=i;
		}
	}
	printf("%s\n",stu[t].name);
	printf("%d\n",stu[t].money);
	printf("%d",sum);
	return 0;
}
 
