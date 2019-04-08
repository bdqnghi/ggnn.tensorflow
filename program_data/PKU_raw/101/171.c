int main()
{
	int a=0,b=0,c=0,word[3]={0},i=0;
	char rank[3]={0};
	for(a=0;a<=2;a++)
	{
		for(b=0;b<=2;b++)
		{
			if(b==a)
			{
				continue;
			}
			c=3-a-b;
			word[a]=(b>a)+(c==a);
			word[b]=(a>b)+(a>c);
			word[c]=(c>b)+(b>a);
			rank[a]=65;
			rank[b]=66;
			rank[c]=67;
			if(word[a]==2-a&&word[b]==2-b&&word[c]==2-c)
			{
				for(i=0;i<=2;i++)
				{
					cout<<rank[i];
				}
			}
		}
	}
	return 0;
}