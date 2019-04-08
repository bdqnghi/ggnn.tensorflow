int main()
{
	int n,i;
	int year;
	double y1=0,y2=0,y3=0,y4=0;
	cin>>n;
	for(i=0;i<n;i++) //???????
	{
		cin>>year;
		if(year<19)
			y1++;
		else if(year<36)
			y2++;
		else if(year<61)
			y3++;
		else
			y4++;
	}
	y1=y1*100/n;
	y2=y2*100/n;
	y3=y3*100/n;
	y4=y4*100/n;
	printf("1-18: %.2lf%\n",y1);
	printf("19-35: %.2lf%\n",y2);
	printf("36-60: %.2lf%\n",y3);
	printf("60??: %.2lf%\n",y4);

	
	return 0;
}
