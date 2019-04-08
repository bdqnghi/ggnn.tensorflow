int main()
{
	char a[205];
	char b[205];
	char t[205];
	char c[205];
	char *t1,*t2,*t3;
	cin>>a>>b;
	int l1 = strlen(a);
	int l2 = strlen(b);
	if(l1<l2)
	{
		int i,j,carry=0;
		for(i=0;i<205;i++) c[i]='\0';
		t3 = &c[l2];
		t2 = &b[l2-1];
		t1 = &a[l1-1];
		while(t1>=a)
		{
			*t3 =  (*t1 + *t2 - '0' - '0' + carry) % 10 + '0' ;
			carry =( *t1 + *t2 - '0' - '0' + carry)/10;
			t3--;
			t2--;
			t1--;
		}
		while(t2>=b)
		{
			* t3 = (*t2 -'0' + carry)%10 + '0';
			carry =  (*t2 -'0' + carry)/10 ;
			t3--;
			t2--;
		}
		*t3 = carry +'0';
		if(*t3 == '0')
			t3++;
		cout<<t3<<endl;
	}
	else
	{
		int i,j,carry=0;
		for(i=0;i<205;i++) c[i]='\0';
		t3 = &c[l1];
		t2 = &b[l2-1];
		t1 = &a[l1-1];
		while(t2>=b)
		{
			*t3 =  (*t1 + *t2 - '0' - '0' + carry) % 10 + '0' ;
			carry =( *t1 + *t2 - '0' - '0' + carry)/10;
			t3--;
			t2--;
			t1--;
		}
		while(t1>=a)
		{
			* t3 = (*t1 -'0' + carry)%10 + '0';
			carry =  (*t1 -'0' + carry)/10 ;
			t3--;
			t1--;
		}
		*t3 = carry +'0';
		while(*t3 == '0')
			t3++;
		if(*t3=='\0')
			cout<<0<<endl;
		else
		cout<<t3<<endl;
	}
	return 0;
}