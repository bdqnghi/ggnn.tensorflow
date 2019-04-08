int main()
{
	int i,a,b,c;
	char x[3];
    for(a=0;a<3;a++)
	{
		for(b=0;b<3;b++)
		{
			if(b==a)continue;
		    for(c=0;c<3;c++)
			{
				if(c==a||c==b)continue;
				if(((b>a)+(c==a)==2-a)&&((a>b)+(a>c)==2-b)&&((c>b)+(b>a)==2-c))
				{
					x[a]='A';
					x[b]='B';
					x[c]='C';
					for(i=0;i<3;i++)
						cout<<x[i];
				}
			}
		}
	}
	return 0;
}

