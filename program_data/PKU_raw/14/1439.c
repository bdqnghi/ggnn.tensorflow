struct student
{
	int num;
	int yuwen;
	int shuxue;
	int zongfen;
};
void main()
{
	int n,i,j;
	scanf("%d",&n);
	struct student s[3],p,temp;
	for(i=0;i<3;i++)
	{
		scanf("%d%d%d",&s[i].num,&s[i].yuwen,&s[i].shuxue);
		s[i].zongfen=s[i].shuxue+s[i].yuwen;
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2-i;j++)
		{
			if(s[j].zongfen<s[j+1].zongfen)
				temp=s[j],s[j]=s[j+1],s[j+1]=temp;
		}
	}
	for(i=3;i<n;i++)
	{
		scanf("%d%d%d",&p.num,&p.yuwen,&p.shuxue);
		p.zongfen=p.shuxue+p.yuwen;
		if(p.zongfen>s[2].zongfen&&p.zongfen<=s[1].zongfen)
			s[2]=p;
		else if(p.zongfen>s[1].zongfen&&p.zongfen<=s[0].zongfen)
			s[2]=s[1],s[1]=p;
		else if(p.zongfen>s[0].zongfen)
			s[2]=s[1],s[1]=s[0],s[0]=p;
	}
	printf("%d %d\n%d %d\n%d %d",s[0].num,s[0].zongfen,s[1].num,s[1].zongfen,s[2].num,s[2].zongfen);
}