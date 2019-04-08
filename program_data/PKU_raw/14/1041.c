
struct student
{
	int id;
	int math;
	int chinese;
	int sum;
}stu[100000];

int main(int argc, char* argv[])
{
	int i , n ;
	int max1=0,max2=0,max3=0;
	int maxid1=0,maxid2=0,maxid3=0;

	scanf("%d", &n );
	for ( i = 0 ; i < n ; i ++ )
	{
		scanf("%d %d %d", &stu[i].id , &stu[i].chinese ,&stu[i].math );
		stu[i].sum = stu[i].math + stu[i].chinese;
		if ( stu[i].sum > max1 )
		{
			max3 = max2 ;
			max2 = max1 ;
			max1 = stu[i].sum ;
			maxid3 = maxid2 ;
			maxid2 = maxid1 ;
			maxid1 = stu[i].id;
		}
		else if ( stu[i].sum > max2 )
		{
			max3 = max2 ;
			max2 = stu[i].sum ;
			maxid3 = maxid2 ;
			maxid2 = stu[i].id ;
		}
		else if ( stu[i].sum > max3 )
		{
			max3 = stu[i].sum ;
			maxid3 = stu[i].id ;
		}
	}
	printf("%d %d\n%d %d\n%d %d" , maxid1,max1,maxid2,max2,maxid3,max3);
	return 0;
}
