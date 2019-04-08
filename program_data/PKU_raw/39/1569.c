struct student
{
	char name[30];
	int qimocj;
	int banjicj;
	char ganbu;
	char xibu;
	int lunwen;
	int jiangjin;
};
int main()
{
	int n,i,sum=0;
	struct student ren[102]={0},max={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s%d%d %c %c%d",ren[i].name,&ren[i].qimocj,&ren[i].banjicj,&ren[i].ganbu,&ren[i].xibu,&ren[i].lunwen);
	}
	for(i=0;i<n;i++)
	{
		if(ren[i].qimocj>80 && ren[i].lunwen>=1)
		{
			ren[i].jiangjin+=8000;
		}
		if(ren[i].qimocj>85 && ren[i].banjicj>80)
		{
			ren[i].jiangjin+=4000;
		}
		if(ren[i].qimocj>90)
		{
			ren[i].jiangjin+=2000;
		}
		if(ren[i].qimocj>85 && ren[i].xibu=='Y')
		{
			ren[i].jiangjin+=1000;
		}
		if(ren[i].banjicj>80 && ren[i].ganbu=='Y')
		{
			ren[i].jiangjin+=850;
		}
	}
	max.jiangjin=0;
	for(i=0;i<n;i++)
	{
		sum+=ren[i].jiangjin;
		if(ren[i].jiangjin>max.jiangjin)
		{
			max=ren[i];
		}
	}
	printf("%s\n%d\n%d\n",max.name,max.jiangjin,sum);
	return 0;
}



