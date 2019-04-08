struct stu
{
	int num;
	int yw;
	int sx;
	int zf;
}s1,s2,s3,s;
int main()
{

	int n,i;
	s1.zf=s2.zf=s3.zf=-1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d%d",&s.num,&s.yw,&s.sx);
		s.zf=s.yw+s.sx;
		if(s.zf>s1.zf)
		{
			s3=s2;
			s2=s1;
			s1=s;
		}
		else if(s.zf>s2.zf)
		{
			s3=s2;
			s2=s;
		}
		else if(s.zf>s3.zf)
		{
			s3=s;
		}

	}
	
	printf("%d %d\n",s1.num,s1.zf);
	printf("%d %d\n",s2.num,s2.zf);
	printf("%d %d",s3.num,s3.zf);
	
	return 0;
}