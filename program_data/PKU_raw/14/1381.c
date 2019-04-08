struct 
{
	int xuehao;
	int yuwen;
	int shuxue;
}student[1000000];
void swap(int*a,int*b);
int main(int argc, char* argv[])
{
	int n=0;
	scanf("%d",&n);
	int i=0,j=0,total[1000000];
	for(i=0;i<n;i++)
	{
		scanf("%d%d%d",&student[i].xuehao,&student[i].yuwen,&student[i].shuxue);
		total[i]=student[i].yuwen+student[i].shuxue;
	}
	for(i=0;i<3;i++)
	{
		for(j=n-1;j>0+i;j--)
		{
			if(total[j]>total[j-1])
			{
				swap(&total[j],&total[j-1]);
				swap(&student[j-1].xuehao,&student[j].xuehao);
					swap(&student[j-1].yuwen,&student[j].yuwen);
					swap(&student[j-1].shuxue,&student[j].shuxue);
			}
		}
	}
	for(i=0;i<3;i++)
	{
		printf("%d %d\n",student[i].xuehao,total[i]);
	}
	return 0;
}
void swap(int*a,int*b)
{
	int e;
	e=*a;
	*a=*b;
	*b=e;
}