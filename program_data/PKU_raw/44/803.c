int reverse(int num)
{
	if(num==0)
		return 0;
	else if(num>0)
	{
		if(num<10)
			return num;
		else if(num<100)
		{
			int p1=num%10;
			int p2=num/10;
			return (10*p1+p2);
		}
		else if(num<1000)
		{
			int p3=num/100;
			int p2=(num-p3*100)/10;
			int p1=num%10;
			return (100*p1+10*p2+p3);
		}
		else if(num<10000)
		{
			int p4=num/1000;
			int p3=(num-p4*1000)/100;
			int p2=(num-p4*1000-p3*100)/10;
			int p1=num%10;
			return (1000*p1+100*p2+10*p3+p4);
		}
		else
		{
			int p5=num/10000;
			int p4=(num-p5*10000)/1000;
			int p3=(num-p5*10000-p4*1000)/100;
			int p2=(num-p5*10000-p4*1000-p3*100)/10;
			int p1=num%10;
			return (10000*p1+1000*p2+100*p3+10*p4+p5);
		}
	}
	else
	{
		return (0-reverse(0-num));
	}
}
int main()
{
	int n;
	for(int i=0;i<6;i++)
	{
		cin>>n;
		cout<<reverse(n)<<endl;
	}
	return 0;
}