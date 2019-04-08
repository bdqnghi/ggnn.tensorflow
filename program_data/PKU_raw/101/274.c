int main()
{
	int a,b,c,i,j;
	char d[3]={0};
	for(a=1;a<3;a++)
	{
		for(b=0;b<3;b++)
		{
			for(c=0;c<3;c++)
			{	
				if(a+b+c==3&&a+(b>a)+(c==a)==2&&b+(a>b)+(a>c)==2&&c+(c>b)+(b>a)==2)
					{
						d[a]='A';
						d[b]='B';
						d[c]='C';
					}
			}
		}
	}
for(i=0;i<3;i++)
	cout<<d[i];
}