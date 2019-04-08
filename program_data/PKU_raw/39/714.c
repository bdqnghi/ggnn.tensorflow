int main()
{
	struct stu{
		char name[35];
		int sum;
	};
	struct stu m[102],temp;
	int i,j,k,n;
	char a,b;
	scanf("%d",&n);
	struct stu *p=m;
	struct stu *q;
	for(;p<m+n;p++)
	{
		scanf("%s%d%d %c %c%d",(*p).name,&i,&j,&a,&b,&k);
		(*p).sum=0;
		if(i>80 && k>0)
			(*p).sum+=8000;
		if(i>85 && j>80)
			(*p).sum+=4000;
		if(i>90)
			(*p).sum+=2000;
		if(i>85 && b=='Y')
			(*p).sum+=1000;
		if(a=='Y' && j>80)
			(*p).sum+=850;
	}
	p=m;
	i=0;
	i=(*p).sum;
	for(q=p+1;q<m+n;q++)
	{
		i+=(*q).sum;
		if((*p).sum < (*q).sum)
		{
			temp=*p;
			*p=*q;
			*q=temp;
		}
	}
	printf("%s\n%d\n%d\n",m->name,m->sum,i);
	return 0;
}