


int main ()
{
	for(int a=1;a<4;a++)
	{
		for(int b=1;b<4;b++)
		{
			for(int c=1;c<4;c++)
			{
				if(((b>a)+(c==a)==3-a)&&((a>c)+(a>b)==3-b)&&((c>b)+(b>a)==3-c))
				{
					int rank[3]={a,b,c};
					char ch[3]={'A','B','C'};
					for(int i=0;i<2;i++)
					{
						if(rank[i]<rank[i+1])
						{
							swap(rank[i],rank[i+1]);
							swap(ch[i],ch[i+1]);
						}
					}
					for(int i=2;i>=0;i--)
					{
						cout<<ch[i];
					}
				}
			}
		}
	}

	return 0;
}