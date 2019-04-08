char namef(int a,int b,int c,int n)
{
	int i;
	char name[3];
	for(i=0;i<3;i++)
	{
		if(a==i)
		{
			name[i]='A';
		}
		if(b==i)
		{
			name[i]='B';
		}
		if(c==i)
		{
			name[i]='C';
		}
	}	
	return name[n];
}
char numf(int a,int b,int c,int n)
{
	int i;
	char num[3];
	for(i=0;i<3;i++)
	{
		if(a==i)
		{
			num[i]='a';
		}
		if(b==i)
		{
			num[i]='b';
		}
		if(c==i)
		{
			num[i]='c';
		}
	}	
	return num[n];

}

int main()
{
	int a,b,c,A,B,C,i,j;
	char name[3],num[3];
	for(a=0;a<3;a++)
	{
		for(b=0;b<3;b++)
		{
			if(a==b)
			{
				continue;
			}
			for(c=0;c<3;c++)
			{
				if((c==b)||(c==a))
				{
					continue;
				}
				A=(b>a)+(c==a);
				B=(a>b)+(a>c);
				C=(c>b)+(b>a);
				for(j=0;j<3;j++)
				{
					num[j]=numf(a,b,c,j);
					name[j]=namef(A,B,C,j);
				}
				if((num[0]==name[2]+32)&&((num[2]==name[0]+32)&&(num[1]==name[1]+32)))
				{
					for(i=2;i>=0;i--)
					{
						printf("%c",name[i]);
					}
				}
			}
		}
	}
	return 0;
}
