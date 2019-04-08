//?????
int main()
{
	int m2[12],b[12],c[12],w;
	cin>>w;
	for(int i=0;i<12;i++)
	{
		m2[i]=i+1;
		switch(m2[i])
		{
			case 1:m2[i]=13;break;
			case 2:m2[i]=31+13;break;
			case 3:m2[i]=31+28+13;break;
			case 4:m2[i]=31+28+31+13;break;
			case 5:m2[i]=31+28+31+30+13;break;
			case 6:m2[i]=31+28+31+30+31+13;break;
			case 7:m2[i]=31+28+31+30+31+30+13;break;
			case 8:m2[i]=31+28+31+30+31+30+31+13;break;
			case 9:m2[i]=31+28+31+30+31+30+31+31+13;break;
			case 10:m2[i]=31+28+31+30+31+30+31+31+30+13;break;
			case 11:m2[i]=31+28+31+30+31+30+31+31+30+31+13;break;
			case 12:m2[i]=31+28+31+30+31+30+31+31+30+31+30+13;break;
		}
		b[i]=(m2[i]-1)%7;
		c[i]=(b[i]+w)%7;
		if(c[i]==5)
		{
			m2[i]=i+1;
			cout<<m2[i]<<endl;
		}
	}
	return 0;
}