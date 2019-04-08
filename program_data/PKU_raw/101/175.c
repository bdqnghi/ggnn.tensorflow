int main()
{
	int a=0,b=0,c=0;//??????a,b,c
	int cca=0,ccb=0,ccc=0;//????????cca,ccb,ccc
	for(a=1;a<=3;a++)
		for(b=1;b!=a,b<=3;b++)
		{
			c=6-a-b;
			cca=(b>a)+(c==a);
			ccb=(a>b)+(a>c);
			ccc=(c>b)+(b>a);
			if(((a+cca)==3)&&((b+ccb)==3)&&((ccc+c)==3))
				break;//???????????????,????
		}
		if(a>b&&b>c)
			cout<<"CBA"<<endl;
		if(a>c&&c>b)
			cout<<"BCA"<<endl;
		if(b>a&&a>c)
			cout<<"ACB"<<endl;
		if(b>c&&c>a)
			cout<<"ACB"<<endl;
		if(c>b&&b>a)
			cout<<"ABC"<<endl;
		if(c>a&&a>b)
			cout<<"BAC"<<endl;
		return 0;
}