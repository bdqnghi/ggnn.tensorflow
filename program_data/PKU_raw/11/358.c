int main(int argc, char* argv[])
{
	int year,month,day,n,k,m2;
	scanf("%d %d %d",&year,&month,&day);
	if(year%4==0&&year%100!=0||year%400==0)
      m2=29;
	else m2=28;
    k=m2+31; 
    switch(month)
	{
	case 1:n=day;
		break;
    case 2:n=day+31;
		break;
	case 3:n=k+day;
		break;
	case 4:n=k+31+day;
		break;
	case 5:n=31+k+30+day;
		break;
	case 6:n=k+31+30+31+day;
		break;
	case 7:n=k+31+30+31+30+day;
		break;
	case 8:	n=k+31+30+31+30+31+day;
		break;
	case 9:n=k+31+30+31+30+31+31+day;
		break;
	case 10:n=k+31+30+31+30+31+31+30+day;
		break;
	case 11:n=k+31+30+31+30+31+31+30+31+day;
		break;
	case 12:n=k+31+30+31+30+31+31+30+31+30+day;
		break;
	}
 	printf("%d",n);
	return 0;
}

