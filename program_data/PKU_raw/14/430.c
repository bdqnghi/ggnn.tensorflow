int main()
{
	struct stu{
		int chi;
		int ma;
		int sum;
		int i;
	};
	struct stu m[100000],temp;
	int j,n;
	scanf("%d",&n);
	struct stu *p=m;
	struct stu *q;
	for(;p<m+n;p+=1)
	{
		scanf("%d%d%d",&(*p).i,&(*p).chi,&(*p).ma);
		(*p).sum=(*p).chi+(*p).ma;
	}
	for(p=m;p<m+n-1;p++)
	{
		for(q=p+1;q<m+n;q++)
		{
			if((*p).sum < (*q).sum)
			{
				temp=*p;
				*p=*q;
				*q=temp;
			}
		}
		if(p==m+2)
			break;
	}// max is m[0]
	for(p=m;p<m+3;p++)
	{
		printf("%d %d\n",(*p).i,(*p).sum);
	}
	return 0;
}