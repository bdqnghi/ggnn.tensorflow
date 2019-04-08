int main()
{
	long int y,m,d;
	scanf("%d %d %d",&y,&m,&d);

	long int s,r;
	if(y>=2){
		r=(y-1)/4-(y-1)/100+(y-1)/400;
		s=((y-1)+r)%7;
	}else{
		s=0;
	}
	if((y%4==0&&y%100!=0)||y%400==0){
		switch(m)
		{
		case 1:
			s=(s+d)%7;
			break;
		case 2:
			s=(s+31+d)%7;
			break;
		case 3:
			s=(s+31+29+d)%7;
			break;
		case 4:
			s=(s+31+29+31+d)%7;
			break;
		case 5:
			s=(s+31+29+31+30+d)%7;
			break;
		case 6:
			s=(s+31+29+31+30+31+d)%7;
			break;
		case 7:
			s=(s+31+29+31+30+31+30+d)%7;
			break;
		case 8:
			s=(s+31+29+31+30+31+30+31+d)%7;
			break;
		case 9:
			s=(s+31+29+31+30+31+30+31+31+d)%7;
			break;
		case 10:
			s=(s+31+29+31+30+31+30+31+31+30+d)%7;
			break;
		case 11:
			s=(s+31+29+31+30+31+30+31+31+30+31+d)%7;
			break;
		case 12:
			s=(s+31+29+31+30+31+30+31+31+30+31+30+d)%7;
			break;
		}
	}else{
			switch(m)
		{
		case 1:
			s=(s+d)%7;
			break;
		case 2:
			s=(s+31+d)%7;
			break;
		case 3:
			s=(s+31+28+d)%7;
			break;
		case 4:
			s=(s+31+28+31+d)%7;
			break;
		case 5:
			s=(s+31+28+31+30+d)%7;
			break;
		case 6:
			s=(s+31+28+31+30+31+d)%7;
			break;
		case 7:
			s=(s+31+28+31+30+31+30+d)%7;
			break;
		case 8:
			s=(s+31+28+31+30+31+30+31+d)%7;
			break;
		case 9:
			s=(s+31+28+31+30+31+30+31+31+d)%7;
			break;
		case 10:
			s=(s+31+28+31+30+31+30+31+31+30+d)%7;
			break;
		case 11:
			s=(s+31+28+31+30+31+30+31+31+30+31+d)%7;
			break;
		case 12:
			s=(s+31+28+31+30+31+30+31+31+30+31+30+d)%7;
			break;
		}
	}



	switch(s)
	{
	case 1:
		printf("Mon.");
		break;
	case 2:
		printf("Tue.");
		break;
	case 3:
		printf("Wed.");
		break;
	case 4:
		printf("Thu.");
		break;
	case 5:
		printf("Fri.");
		break;
	case 6:
		printf("Sat.");
		break;
	case 0:
		printf("Sun.");
		break;
	}
	return 0;

	}
