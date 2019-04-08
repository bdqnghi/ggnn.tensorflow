
int main (){
	int a,b,c,x,y,z,j,s;
	
	scanf("%d%d%d",&a,&b,&c);
	x=0;
	y=0;
	z=0;
	x=(a-1)+(a-1)/4-(a-1)/100+(a-1)/400;
	for(j=1;j<b;j++){
		if(j==1||j==3||j==5||j==7||j==8||j==10||j==12){
			y+=31;
		}
		else if(j==4||j==6||j==9||j==11){
				y+=30;
		}
		else if(j==2){
					if(a%4==0){
						y+=29;
					}
					else{
						y+=28;
					}
		}
	}
			z=(x+y+c);
			s=z%7;

				switch (s)
				{
			case 0:
				printf("Sun.");
				break;
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
				}
		
		return 0;	
}