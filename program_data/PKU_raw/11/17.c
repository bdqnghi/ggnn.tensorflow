int main(){
	int a,b,c,y;
	scanf("%d\t%d\t%d",&a,&b,&c);
	switch(b) {
		case 1:
			y=c;
		    break;
		case 2:
			y=31+c;
			break;
		case 3:
			y=59+c;
			break;
		case 4:
			y=90+c;
			break;
		case 5:
			y=120+c;
			break;
		case 6:
			y=151+c;
			break;
		case 7:
			y=181+c;
			break;
		case 8:
			y=212+c;
			break;
		case 9:
			y=243+c;
			break;
		case 10:
			y=273+c;
			break;
		case 11:
			y=304+c;
			break;
		case 12:
			y=334+c;
		
	}
	printf("\n%d",y);
	return 0;
}