struct Student
{
	int No;
	int Chinese;
	int Maths;
    int Total;
};

void bubble(struct Student a[],int n)
{
	int i,j;
	struct Student temp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j].Total<a[j+1].Total)
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}

int main()
{
	int n,i;
	struct Student stu[4];
	scanf("%d",&n);
	if(n>3)
	{
		for(i=0;i<3;i++)
		{
	    	scanf("%d%d%d",&stu[i].No,&stu[i].Chinese,&stu[i].Maths);
	    	stu[i].Total=stu[i].Chinese+stu[i].Maths;
		}
        for(i=3;i<n;i++)
		{
		    scanf("%d%d%d",&stu[3].No,&stu[3].Chinese,&stu[3].Maths);
			stu[3].Total=+stu[3].Chinese+stu[3].Maths;
			bubble(stu,4);
		}
	}
	else
	{	
		for(i=0;i<n;i++)
		{
	    	scanf("%d%d%d",&stu[i].No,&stu[i].Chinese,&stu[i].Maths);
	    	stu[i].Total=stu[i].No+stu[i].Chinese+stu[i].Maths;
		}
		bubble(stu,n);
	}
	for(i=0;i<n&&i<3;i++)printf("%d %d\n",stu[i].No,stu[i].Total);
	return 0;
}
