int main()
{
	int x[1000],y[1000],t[1000];                      //??????
	char c[10000],d[10000],num[10000][10];            //??????
	char *p,*q;
	int s=0,m=0,n=0;
	int i,j;
	cin.getline(c,10000);
	p=c;q=num[s];
	while(1)
	{
		if(*p=='\0')                                  //??
		{
			*q='\0';
			s++;
			break;
		}
		if(*p==',')                                   //????
		{
			*q='\0';
			q=num[++s];
			p++;
		}
		else                                          //????
		{
			*q=*p; 
			p++;q++;
		}
	}
	for(i=0;i<s;i++)                                  //?????
	{
		x[i]=atol(num[i]);
	}
	s=0;
	cin.getline(d,10000);
	p=d;q=num[s];
	while(1)
	{
		if(*p=='\0')                                  //??
		{
			*q='\0';
			s++;
			break;
		}
		if(*p==',')                                   //????
		{
			*q='\0';
			q=num[++s];
			p++;
		}
		else                                          //????
		{
			*q=*p; 
			p++;q++;
		}
	}
	for(i=0;i<s;i++)                                  //?????
	{
		y[i]=atol(num[i]);
	}
	for(i=0;i<s;i++)                                  //??????
	{
		if(y[i]>m)m=y[i];
	}
	for(i=0;i<m;i++)                                  //?????
		t[i]=0;
	for(i=0;i<s;i++)                                  //???????+1
	{
		for(j=x[i];j<y[i];j++)
			t[j]++;
	}
	for(i=0;i<m;i++)                                  //??????
	{
		if(t[i]>n)n=t[i];
	}
	cout<<s<<" "<<n<<endl;
	return 0;
}