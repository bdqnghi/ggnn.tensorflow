int main()
{
	struct strudent
	{
		char sex[7];
		float h;
		int c;
	}s[45],m[40],f[40],t;
	int n,i,j=0,k=0,female=0,male=0,l;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("\n%s %f",&s[i].sex,&s[i].h);
	}
	for(i=0;i<n;i++)
	{
		l=strlen(s[i].sex);
		if(l==4)
		{
			s[i].c=1;
		}
		else if(l==6)
		{
			s[i].c=0;
		}
	}
	for(i=0;i<n;i++)
	{
		if(s[i].c==1)
		{
			m[male]=s[i];
			male++;
		}
		else if(s[i].c==0)
		{
			f[female]=s[i];
			female++;
		}
	}
	for(i=1;i<male;i++)
	{
		for(j=male-1;j>0;j--)
		{
			if(m[j].h<m[j-1].h)
			{
				t=m[j];
				m[j]=m[j-1];
				m[j-1]=t;
			}
		}
	}
	for(i=1;i<female;i++)
	{
		for(j=female-1;j>0;j--)
		{
			if(f[j].h>f[j-1].h)
			{
				t=f[j];
				f[j]=f[j-1];
				f[j-1]=t;
			}
		}
	}
	for(i=0;i<male;i++)
	{
		printf("%.2f ",m[i].h);
	}
	for(i=0;i<female;i++)
	{
		if(i!=female-1)
		{
			printf("%.2f ",f[i].h);
		}
		else
			printf("%.2f",f[i].h);
	}
	return 0;
}