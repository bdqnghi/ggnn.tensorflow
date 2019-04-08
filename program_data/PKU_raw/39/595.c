

int sch(int e,int test,char mon,char reg,int art)
{
	int total=0;
	if(e>80&&art>=1) total+=8000;
	if(e>85&&test>80) total+=4000;
	if(e>90) total+=2000;
	if(e>85&&reg=='Y') total+=1000;
	if(test>80&&mon=='Y') total+=850;
	return total;
}
int main()
{
	int peoplenumber,i,g,c,a,sum=0,most=0;
	char name[100],top[100],m,r;
	scanf("%d",&peoplenumber);
	for(i=0;i<peoplenumber;i++)
	{
		scanf("%s%d %d %c %c %d",name,&g,&c,&m,&r,&a);
		if(sch(g,c,m,r,a)>most)
		{
			strcpy(top,name);
			most=sch(g,c,m,r,a);
		}
		sum+=sch(g,c,m,r,a);
	}
	printf("%s\n%d\n%d",top,most,sum);
	//scanf("%d %d %c %c %d",&g,&c,&m,&r,&a);
	//printf("%d",sch(g,c,m,r,a));

	return 0;
}
