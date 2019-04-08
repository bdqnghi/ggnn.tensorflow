int Compare(const void *elem1, const void *elem2)
{
    return *((int *)(elem1)) - *((int *)(elem2));
}
struct Student
{
	char sex[10];
	float height;
}stu[40];
int main()
{
	int n,z,k1=0,k2=0;
	float male[40],female[40];
	char a[10]="male",b[10]="female";
	int i,i1,i2,i3;
    scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %f",stu[i].sex,&stu[i].height);
		z=strcmp(stu[i].sex,a);
		if(z==0)
			{male[k1]=stu[i].height;
		    k1++;}
		else
			{female[k2]=stu[i].height;
		    k2++;}
	}
	qsort(male,k1,sizeof(float),Compare);
	qsort(female,k2,sizeof(float),Compare);
	for(i1=0;i1<k1;i1++)
	{
		printf("%.2f ",male[i1]);
	}
	for(i2=k2-1;i2>=1;i2--)
	{
		printf("%.2f ",female[i2]);
	}
	printf("%.2f",female[0]);
}