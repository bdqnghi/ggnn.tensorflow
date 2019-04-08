int main(int argc, char* argv[])
{
	struct test {
		int ID,chinese,maths,sum;
	} ss[100000];
	int i,n;
	scanf ("%d",&n);
	for (i=1;i<=n;i++)
	{
		scanf ("%d%d%d",&ss[i].ID,&ss[i].chinese,&ss[i].maths);
		ss[i].sum=ss[i].chinese+ss[i].maths;
	}
	struct score {
		int ID,sum;
	} s[5];
	s[1].sum=0;
	s[2].sum=0;
	s[3].sum=0;
	for (i=0;i<=n;i++)
	{
		if (ss[i].sum>s[1].sum) 
		{
			s[3].ID=s[2].ID;
			s[3].sum=s[2].sum;
			s[2].ID=s[1].ID;
			s[2].sum=s[1].sum;
			s[1].ID=ss[i].ID;
			s[1].sum=ss[i].sum;
		}
		else if (ss[i].sum>s[2].sum)
		{
			s[3].ID=s[2].ID;
			s[3].sum=s[2].sum;
			s[2].ID=ss[i].ID;
			s[2].sum=ss[i].sum;
		}
		else if (ss[i].sum>s[3].sum)
		{
			s[3].ID=ss[i].ID;
			s[3].sum=ss[i].sum;
		}
	}
	for (i=1;i<=3;i++)
	{
		printf ("%d %d\n",s[i].ID,s[i].sum);
	}
	return 0;
}

