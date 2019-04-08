struct Student
{	int num;
	int ch;
	int math;
	int sum;
};
int main()
{
	struct Student stu[4],temp;
	int i,j,k,n;
	scanf("%d",&n);
	for(i=0;i<3;i++)
	{
		scanf("%d %d %d",&stu[i].num,&stu[i].ch,&stu[i].math);
	    stu[i].sum=stu[i].ch+stu[i].math;
	}
	for(i=0;i<2;i++)
	{
		k=i;
		for(j=i+1;j<3;j++)
			if(stu[j].sum>stu[i].sum)
			{k=j;
			temp=stu[k];
			stu[j]=stu[i];
			stu[i]=temp;}
	}
      //  for(i=0;i<3;i++)
		//  printf("%d %d\n",stu[i].num,stu[i].sum);
	for(i=3;i<n;i++)
	{
		scanf("%d %d %d",&stu[3].num,&stu[3].ch,&stu[3].math);
	    stu[3].sum=stu[3].ch+stu[3].math;
		if(stu[3].sum>stu[0].sum)
		{
			stu[2]=stu[1];
			stu[1]=stu[0];
			stu[0]=stu[3];
		}
		else if(stu[3].sum>stu[1].sum)
		{
			stu[2]=stu[1];
			stu[1]=stu[3];
		}
		else if(stu[3].sum>stu[2].sum)
			stu[2]=stu[3];
	}
	for(i=0;i<3;i++)
		printf("%d %d\n",stu[i].num,stu[i].sum);
    return 0;
}