
int main(int argc, char* argv[])
{
	int x,y,z,i,n;
	scanf("%d %d %d",&x,&y,&z);
	if(x%400==0)
		i=1;
	else
	{
		if(x%100==0)
			i=0;
		else
		{
			if(x%4==0)
				i=1;
			else
				i=0;
		}
	}
	if(i==1)
	{
		switch(y)
		{
		case 1:n=z;break;
		case 2:n=31+z;break;
		case 3:n=31+29+z;break;
		case 4:n=31+29+31+z;break;
		case 5:n=31+29+31+30+z;break;
		case 6:n=31+29+31+30+31+z;break;
		case 7:n=31+29+31+30+31+30+z;break;
		case 8:n=31+29+31+30+31+30+31+z;break;
        case 9:n=31+29+31+30+31+30+31+31+z;break;
        case 10:n=31+29+31+30+31+30+31+31+30+z;break;
		case 11:n=31+29+31+30+31+30+31+31+30+31+z;break;
		case 12:n=31+29+31+30+31+30+31+31+30+31+30+z;break;
		}
	}
	else
	{
		switch(y)
		{
		case 1:n=z;break;
		case 2:n=31+z;break;
		case 3:n=31+28+z;break;
		case 4:n=31+28+31+z;break;
		case 5:n=31+28+31+30+z;break;
		case 6:n=31+28+31+30+31+z;break;
		case 7:n=31+28+31+30+31+30+z;break;
		case 8:n=31+28+31+30+31+30+31+z;break;
        case 9:n=31+28+31+30+31+30+31+31+z;break;
        case 10:n=31+28+31+30+31+30+31+31+30+z;break;
		case 11:n=31+28+31+30+31+30+31+31+30+31+z;break;
		case 12:n=31+28+31+30+31+30+31+31+30+31+30+z;break;
		}
	}
	printf("%d",n);
	return 0;
}
