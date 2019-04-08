int main()
{
	void output(int a,int b,int c,int k);
	int a,b,c;
	for(a=1;a<=3;a++)
		for(b=1;b<=3;b++)
		{
			c=6-a-b;
			if(a*b*c==6&&((b>a)+(c==a)==3-a&&(a>b)+(a>c)==3-b&&(c>b)+(b>a)==3-c))
			{
				output(a,b,c,1);
				output(a,b,c,2);
				output(a,b,c,3);
			}
        }
		return 0;
}



void output(int a,int b,int c,int k)
{
	if (a==k)cout<<"A";
    else if(b==k)cout<<"B";
	else cout<<"C";
}