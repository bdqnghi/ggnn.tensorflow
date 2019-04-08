int main(int argc, char* argv[])
{
	int x,y,z,d;
	scanf("%d %d %d",&x,&y,&z);
	if((x%100!=0&&x%4==0)||(x%100==0&&x%400==0)){
		switch(y){
		case 1:d=z;break;
		case 2:d=z+31;break;
		case 3:d=z+31+29;break;
        case 4:d=z+31+29+31;break;
		case 5:d=z+31+29+31+30;break;
		case 6:d=z+31+29+31+30+31;break;
		case 7:d=z+31+29+31+30+31+30;break;
		case 8:d=z+31+29+31+30+31+30+31;break;
		case 9:d=z+31+29+31+30+31+30+31+31;break;
		case 10:d=z+31+29+31+30+31+30+31+31+30;break;
		case 11:d=z+31+29+31+30+31+30+31+31+30+31;break;
		case 12:d=z+31+29+31+30+31+30+31+31+30+31+30;break;
		default:
			;
		}
	}
	else{
		switch(y){
		case 1:d=z;break;
		case 2:d=z+31;break;
		case 3:d=z+31+28;break;
        case 4:d=z+31+28+31;break;
		case 5:d=z+31+28+31+30;break;
		case 6:d=z+31+28+31+30+31;break;
		case 7:d=z+31+28+31+30+31+30;break;
		case 8:d=z+31+28+31+30+31+30+31;break;
		case 9:d=z+31+28+31+30+31+30+31+31;break;
		case 10:d=z+31+28+31+30+31+30+31+31+30;break;
		case 11:d=z+31+28+31+30+31+30+31+31+30+31;break;
		case 12:d=z+31+28+31+30+31+30+31+31+30+31+30;break;
		default:
			;
		}
	}
	printf("%d\n",d);
	return 0;
}