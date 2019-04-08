int main()
{
	int a=0,b=0,c=0,word[4]={0};
	for(a=1;a<=3;a++)
	{
		for(b=1;b<=3;b++)
		{
			if(b==a)
			{
				continue;
			}
			c=6-a-b;
			word[a]=(b>a)+(c==a);
			word[b]=(a>b)+(a>c);
			word[c]=(c>b)+(b>a);
			if((word[a]==3-a)&&(word[b]==3-b)&&(word[c]==3-c))
			{
				for(int i=1;i<=3;i++)
				{
					if(a==i)
					{
						cout<<"A";
					}
					else if(b==i)
					{
						cout<<"B";
					}
					else if(c==i)
					{
						cout<<"C";
					}
				}
			}
		}
	}
	return 0;
}