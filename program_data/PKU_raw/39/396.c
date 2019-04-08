
int yuan(int p,int q)
{
	int z=0;
	if(p>80&&q>=1) z=1;
	return z;
}
int wusi(int p,int q)
{
int z=0;
	if(p>85&&q>80) z=1;
	return z;
}
int youxiu(int p)
{
int z=0;
	if(p>90) z=1;
	return z;
}
int xibu(int p,char ip)
{
int z=0;
	if(p>85&&ip=='Y') z=1;
	return z;
}
int banji(int p,char ip)
{int z=0;
	
	if(p>80&&ip=='Y') z=1;
	return z;
}

void main()
{
	struct student
	{
		char name[20];
		int gpa;
		int arg;
		char leader;
		char xibu;
		int paper;
		int sum;
	}*s;
	int i,n,a,b,c,d,e,sum=0;
	scanf("%d",&n);
	s=(struct student*)malloc(n*sizeof(struct student));
	for(i=0;i<n;i++)
	{
		scanf("%s %d %d %c %c %d",&s[i].name,&(*(s+i)).gpa,&(*(s+i)).arg,&(*(s+i)).leader,&(*(s+i)).xibu,&(*(s+i)).paper);
		(*(s+i)).sum=0;
    	a=yuan((*(s+i)).gpa,(*(s+i)).paper);
		b=wusi((*(s+i)).gpa,(*(s+i)).arg);
		c=youxiu((*(s+i)).gpa);
		d=xibu((*(s+i)).gpa,(*(s+i)).xibu);
		e=banji((*(s+i)).arg,(*(s+i)).leader);
		(*(s+i)).sum=8000*a+4000*b+2000*c+1000*d+850*e;
		sum=sum+(*(s+i)).sum;
	}
    for(i=1;i<n;i++)
	{
		if((*(s+0)).sum<(*(s+i)).sum)
		(*(s+0))=(*(s+i));		
	}
		printf("%s\n%d\n%d",s[0].name,(*(s+0)).sum,sum);
	

}






