int main()
{
	int year,month,day,flag;
	int daytal,tal;
	cin>>year>>month>>day;
	if(year%400==0||(year%4==0)&&(year%100!=0))
		flag=0;
	else
		flag=1;
	switch(month)
	{
	case 1:
		daytal=0;
		break;
	case 2:
		daytal=31;
		break;
	case 3:
		daytal=60;
		break;
	case 4:
		daytal=91;
		break;
	case 5:
		daytal=121;
		break;
	case 6:
		daytal=152;
		break;
	case 7:
		daytal=182;
		break;
	case 8:
		daytal=213;
		break;
	case 9:
		daytal=244;
		break;
	case 10:
		daytal=274;
		break;
	case 11:
		daytal=305;
		break;
	case 12:
		daytal=335;
		break;
	}
	if(month<2)
		flag=0;
	tal=daytal+day-flag;
	cout<<tal<<endl;
	return 0;
}
