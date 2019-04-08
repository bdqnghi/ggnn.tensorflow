int main(int argc, char* argv[])
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if((a%4==0&&a%100!=0)||a%400==0){
		if(b==1)
			printf("%d",c);
		else if(b==2)
			printf("%d",31+c);
		else if(b==3)
			printf("%d",60+c);
		else if(b==4)
			printf("%d",91+c);
		else if(b==5)
			printf("%d",121+c);
		else if(b==6)
			printf("%d",152+c);
		else if(b==7)
			printf("%d",182+c);
		else if(b==8)
			printf("%d",213+c);
		else if(b==9)
			printf("%d",244+c);
		else if(b==10)
			printf("%d",274+c);
		else if(b==11)
			printf("%d",305+c);
		else if(b==12)
			printf("%d",336+c);}
	else{
		if(b==1)
			printf("%d",c);
		else if(b==2)
			printf("%d",31+c);
		else if(b==3)
			printf("%d",59+c);
		else if(b==4)
			printf("%d",90+c);
		else if(b==5)
			printf("%d",120+c);
		else if(b==6)
			printf("%d",151+c);
		else if(b==7)
			printf("%d",181+c);
		else if(b==8)
			printf("%d",212+c);
		else if(b==9)
			printf("%d",243+c);
		else if(b==10)
			printf("%d",273+c);
		else if(b==11)
			printf("%d",304+c);
		else if(b==12)
			printf("%d",335+c);}

	return 0;
}