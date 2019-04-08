struct Student
{char name[26];
 int a;
};
int main()
{
	int n,i,k,l,m;
	char j,t;
	int b[26]={0};
	scanf ("%d",&n);
	struct Student stu[999];
	for (i=0;i<n;i++)
	{
		scanf ("%d %s",&stu[i].a,stu[i].name);
	}
	for (j='A',k=0;j<='Z';j++,k++)
		for (i=0;i<n;i++)
			for (l=0;l<26;l++)
				if (stu[i].name[l]==j)
					b[k]++;
	for (j='A',k=0,m=0;j<='Z';j++,k++)
		if (b[k]>m)
		{
			m=b[k];
		    t=j;
		}
	printf ("%c\n%d",t,m);
	for (i=0;i<n;i++)
		for (l=0;l<26;l++)
			if (stu[i].name[l]==t)
				printf ("\n%d",stu[i].a);
	return 0;
}