int main()
{
	
	int y,m,d,r=0,a,z,i;
	
	scanf("%d %d %d",&y,&m,&d);
	r=0;
	while(y>2000){
		y=y-2000;
	}
	for(i=1;i<y;i++){
		if((i%400==0)||(i%4==0&&i%100!=0)){
			r++;
		}
		else{continue;}
	}
	z=(y-1)*365+r;

	if((y%400==0)||(y%4==0&&y%100!=0)){
			switch(m){
			case 1:
				z=z+d;
				break;
			case 2:
				z+=31+d;
				break;
			case 3:
				z=z+31+29+d;
				break;
			case 4:
				z+=31+29+31+d;
				break;
			case 5:
				z+=31+29+31+30+d;
				break;
			case 6:
				z+=31+29+31+30+31+d;
				break;
			case 7:
				z+=31+29+31+30+31+30+d;
				break;
			case 8:
				z+=31+29+31+30+31+30+31+d;
				break;
			case 9:
				z+=31+29+31+30+31+30+31+31+d;
				break;
			case 10:
				z+=31+29+31+30+31+30+31+31+30+d;
				break;
			case 11:
				z+=31+29+31+30+31+30+31+31+30+31+d;
				break;
			case 12:
				z+=31+29+31+30+31+30+31+31+30+31+30+d;
				break;
			}
		}
	else{			
			switch(m){
            case 1:
				z=z+d;
				break;
			case 2:
				z+=31+d;
				break;
			case 3:
				z=z+31+28+d;
				break;
			case 4:
				z+=31+28+31+d;
				break;
			case 5:
				z+=31+28+31+30+d;
				break;
			case 6:
				z+=31+28+31+30+31+d;
				break;
			case 7:
				z+=31+28+31+30+31+30+d;
				break;
			case 8:
				z+=31+28+31+30+31+30+31+d;
				break;
			case 9:
				z+=31+28+31+30+31+30+31+31+d;
				break;
			case 10:
				z+=31+28+31+30+31+30+31+31+30+d;
				break;
			case 11:
				z+=31+28+31+30+31+30+31+31+30+31+d;
				break;
			case 12:
				z+=31+28+31+30+31+30+31+31+30+31+30+d;
				break;
			}
	}
		a=(z-1)%7;
		switch(a){
		case 0:
			printf("Mon.");
			break;
		case 1:
			printf("Tue.");
			break;
		case 2:
			printf("Wed.");
			break;
		case 3:
			printf("Thu.");
			 break;
		case 4:
			printf("Fri.");
			break;
		case 5:
			printf("Sat.");
			break;
		case 6:
			printf("Sun.");
			break;
		}
		
			
	
				return 0;
				}

