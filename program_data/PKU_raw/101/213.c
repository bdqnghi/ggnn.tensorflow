int sgn(int n)
{
	if(n>0)	return 1;
	if(n<0)	return -1;
	else    return 0;
}
int main()
{
	int a,b,c;
	int word[4];
	for(int a=1;a<=3;a++)
		for(int b=1;b<=3;b++)
			for(int c=1;c<=3;c++)
			{
				if(a!=1&&b!=1&&c!=1)	continue;
				if(a!=2&&b!=2&&c!=2&&!(a==1&&b==1&&c==1))	continue;
				word[1]=(b>a)+(c==a);
				word[2]=(a>b)+(a>c);
				word[3]=(c>b)+(b>a);
				if(sgn(word[1]-word[2])==-sgn(a-b)&&sgn(word[1]-word[3])==-sgn(a>c)&&sgn(word[3]-word[2])==-sgn(c>b))
				{
					if(a==1)	cout<<'A';
					if(b==1)	cout<<'B';
					if(c==1)	cout<<'C';
					if(a==2)	cout<<'A';
					if(b==2)	cout<<'B';
					if(c==2)	cout<<'C';					
					if(a==3)	cout<<'A';
					if(b==3)	cout<<'B';
					if(c==3)	cout<<'C';
					cout<<endl;
				}
			}
	return 0;

}