int main()
{
	int a,b,c,A,B,C,j,s=0,n=0,y;
	scanf("%d %d %d",&a,&b,&c);

	A=(a-1)/4;
	B=A/25;
	C=B/4;
	s=A+C-B;
	n=2*s+1*(a-1-s);

for(j=1;j<b;j++)
	{
		if(j==1||j==3||j==5||j==7||j==8||j==10)
		{
			n+=31;
		}
		else if(j==4||j==6||j==9||j==11)
		{
			n+=30;
		}
		else
		{
			if((a%400==0)||(a%4==0)&&(a%100!=0))
			{
				n+=29;
			}
			else
			{
				n+=28;
			}
		}
	}
	n+=c;
	y=n%7;
	switch(y){
	case 1:{
		printf("Mon.");
		break;
		   }
	case 2:{
		printf("Tue.");
		break;
		   }
	case 3:{
		printf("Wed.");
		break;
		   }
	case 4:{
		printf("Thu.");
		break;}
	case 5:{
		printf("Fri.");
		break;
		   }
	case 6:{
		printf("Sat.");
		break;
		   }
	case 0:{
		printf("Sun.");
		break;
		   }
	}
	return 0;
}

