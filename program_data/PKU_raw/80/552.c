int main()
{
	int a1,b1,c1,a2,b2,c2,i,sum=0,s=0,f=0,t=0;
	cin >>a1>>b1>>c1>>a2>>b2>>c2;
	for(i = a1;i <a2;i++)
	{
		if((i % 4 == 0 &&i % 100 != 0) || (i % 400 == 0))
			sum+=366;
		else
			sum+=365;
	}

	if(b1 > b2)
	{
		f = 1;
		t=b1;b1=b2;b2=t;
	}
	for(i = b1;i < b2;i++)
	{
		if(i==2)
		{
			if((a2 % 4 == 0 && a2 % 100 != 0) || (a2 % 400 == 0)) 
				s+=29;
			else
				s+=28;
		}
		else if(i==1||i==3||i==5||i==7||i==8||i==10)
			s += 31;
		else
			s+=30;
	}
	if(f==1)
		sum-=s;
	else
		sum+=s;
	sum=sum+(c2-c1);
	cout <<sum<<endl;
	return 0;
}
