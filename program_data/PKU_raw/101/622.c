int main()
{
	int a,b,c;
	int word[3];
	for (a=1;a<4;)
	{
		for (b=1;b<4;)
		{
			if (b==a)
				b=b+1;
			c=6-a-b;
			word[0]=(b>a)+(c==a);
			word[1]=(a>b)+(a>c);
			word[2]=(c>b)+(b>a);
			if ((a>b)&&(b>c)&&(word[2]>word[1])&&(word[1]>word[0]))
				cout <<"CBA"<<endl;
			if ((a>c)&&(c>b)&&(word[1]>word[2])&&(word[2]>word[0]))
				cout <<"BCA"<<endl;
			if ((b>a)&&(a>c)&&(word[2]>word[0])&&(word[0]>word[1]))
				cout <<"CAB"<<endl;
			if ((b>c)&&(c>a)&&(word[0]>word[2])&&(word[2]>word[1]))
				cout <<"ACB"<<endl;
			if ((c>a)&&(a>b)&&(word[1]>word[0])&&(word[0]>word[2]))
				cout <<"BAC"<<endl;
			if ((c>b)&&(b>a)&&(word[0]>word[1])&&(word[1]>word[2]))
				cout <<"ABC"<<endl;
			b=b+1;
		}
		a=a+1;
	}
	return 0;
}