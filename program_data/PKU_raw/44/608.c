int reverse(int);
int main()
{	
	int num;
	while (cin >>num)
	cout <<reverse(num) <<endl;
	
	return 0;
}
int reverse(int num)
	{
		int judge=0;
		if (num<0) { num=-num;judge=1;}
		int n[10]={0},count=0,reverses=0,i,j=1;
		do
		{
			n[count]=num%10;
			num=(num-n[count])/10;
			count++;
		}
		while (num!=0);
		for (i=count-1;i>=0;i--)
		{
			reverses+=n[i]*j;
			j*=10;
		}
		if (judge==1) reverses=-reverses;
		return(reverses);
	 }