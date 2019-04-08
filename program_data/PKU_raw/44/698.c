int reverse(int num)
{
	int numnew;
	if(num==0)
		return 0;
	else 
	{
		if(num>0)
		{
			numnew=0;
			while(num>0)
			{
				numnew=numnew*10+num%10;
				num=num/10;
			}
			return numnew;
		}
		else if(num<0)
		{
			num=-num;
			numnew=0;
			while(num>0)
			{
				numnew=numnew*10+num%10;
				num=num/10;
			}
			return -numnew;
		}
	}
}
int main()
{
	int i,a[6],answer[6];
	for(i=0;i<6;i++)
	{
		cin >>a[i];
		answer[i]=reverse(a[i]);
		cout <<answer[i]<<endl;
	}
	return 0;
}
