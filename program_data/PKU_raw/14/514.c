struct Student
{
	int num;
	int chi;
	int math;
	int total;
}person[100000],first[3]={{0,0,0,0},{0,0,0,0},{0,0,0,0}};
int main()
{
	long n;
	int i,j;
	scanf("%ld",&n);

	for(i=0;i<n;i++)
	{
		scanf("%ld%d%d",&person[i].num,&person[i].chi,&person[i].math);
		person[i].total=person[i].chi+person[i].math;
		if(person[i].total>first[0].total){first[1]=first[0];first[0]=person[i];}
		else
			if(person[i].total>first[1].total){first[2]=first[1];first[1]=person[i];}
			else
				if(person[i].total>first[2].total){first[2]=person[i];}
	}
	for(j=0;j<3;j++)
	{
		printf("%ld %d\n",first[j].num,first[j].total);
	}
}
