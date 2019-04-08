
int f(int i)
{
	int t;
	if (i%100==0)
		{
			if(i%400==0)
			t=1;
			else 
			t=0;
		}
	else if (i%4==0)
		t=1;
	else 
		t=0;
		return t;
}

int main()
{
	int y,m,d,n,i;
	n=0;
	cin>>y>>m>>d;
	if(y>=2800)
	{
		y=y%400+1;
		n+=5;	
	}
	for(i=1;i<y;i++)
	{
		if (f(i)==1)
		n+=2;
		else 
		n++;
	}
	if (f(y)==1 && m>2)
	n++;
	for (i=1;i<m;i++)
	{
		if (i==1 || i==3 || i==5 || i==7 || i==8 || i==10)
		n+=3;
		if (i==4 || i==6 || i==9 || i==11)
		n+=2;
	}
	n+=d;
	n=n%7;
	switch (n)
	{
		case 1: cout << "Mon."<<endl;break;
		case 2: cout << "Tue."<<endl;break;
		case 3: cout << "Wed."<<endl;break;
		case 4: cout << "Thu."<<endl;break;
		case 5: cout << "Fri."<<endl;break;
		case 6: cout << "Sat."<<endl;break;
		default: cout << "Sun."<<endl;
	}
	return 0;
}