int main()//?????
{
	int a,b,c,word[4],rank[3],i;
	char name[3];//????
	for(a=0;a<=2;a++)
		for(b=0;b<=2;b++)
		{
			if(a==b)continue;
			c=3-a-b;//a,b,c???0?1?2?????
			word[1]=(b>a)+(c==a);
			word[2]=(a>b)+(a>c);
			word[3]=(c>b)+(b>a);//word[1][2][3]???a,b,c??????
			rank[a]=1;
			rank[b]=2;
			rank[c]=3;//a,b,c??????1?2?3
			if(word[rank[0]]>word[rank[1]]>word[rank[2]])
				{
					name[a]='A';
					name[b]='B';
					name[c]='C';//??a,b,c????A?B?C
					for(i=0;i<=2;i++)
						cout<<name[i];//??
			    }
		}
		return 0;
}//?????