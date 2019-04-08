struct student
{
	int num;
	float yuwen;
	float shuxue;
	float total;
}stu[100000];
void main()
{
	int i,n,j;
	struct student *p;
	p=&stu[0];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%f%f",&(p+i)->num,&(p+i)->yuwen,&(p+i)->shuxue);
		(p+i)->total=(p+i)->shuxue+(p+i)->yuwen;
	}
	for(i=0;i<3;i++)
		for(j=0;j<n-1-i;j++)
		{
			if((*(p+j)).total>=(*(p+j+1)).total)
			{
				struct student temp;
				temp=*(p+j+1);
				*(p+j+1)=*(p+j);
				*(p+j)=temp;
			}
		}
	if(n>2)
		for(i=1;i<4;i++)
			printf("%d %g\n",(*(p+n-i)).num,(*(p+n-i)).total);
	else if(n=2)
		printf("%d %g\n%d %g\n",(*(p+1)).num,(*(p+1)).total,(*p).num,(*p).total);
}
