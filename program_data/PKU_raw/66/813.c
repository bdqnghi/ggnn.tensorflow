int main()
{
	long int x;

	int a,y;
	long int c[13];
	scanf("%16ld",&x);
	scanf("%d",&y);
	scanf("%d",&a);



	c[1]=0;
	c[2]=31;
	if((x%4==0)&&(x%100!=0)||(x%400==0))
		c[3]=60;
	else
		c[3]=59;
	c[4]=c[3]+31;
	c[5]=c[4]+30;
	c[6]=c[5]+31;
	c[7]=c[6]+30;
	c[8]=c[7]+31;
	c[9]=c[8]+31;
	c[10]=c[9]+30;
	c[11]=c[10]+31;
	c[12]=c[11]+30;
	if((x%4==0)&&(x%100!=0)||(x%400==0))
	    x=(x-1)+(x/4-1-x/100+x/400)+c[y]+a;
	else
		x=(x-1)+(x/4-x/100+x/400)+c[y]+a;

	switch(x%7){
	case 1:
		printf("Mon.\n");
		break;
	case 2:
		printf("Tue.\n");
		break;
	case 3:
		printf("Wed.\n");
		break;
	case 4:
		printf("Thu.\n");
		break;
	case 5:
		printf("Fri.\n");
		break;
	case 6:
		printf("Sat.\n");
		break;
	case 0:
		printf("Sun.\n");
		break;
	}
	return 0;
	
}
