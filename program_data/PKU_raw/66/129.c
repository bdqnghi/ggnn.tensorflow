int main()
{
	int a,b,c,x1,x2,x3,x4,x,y;
	scanf("%d %d %d",&a,&b,&c);
	x1=(((a-1)%400)/100)*5+(((a-1)%100)/4)*5+((a-1)%4)*1;
	if(b==1) x2=0;
	else if(b==2) x2=31;
	else if(b==3) x2=59;
	else if(b==4) x2=90;
	else if(b==5) x2=120;
	else if(b==6) x2=151;
	else if(b==7) x2=181;
	else if(b==8) x2=212;
	else if(b==9) x2=243;
	else if(b==10) x2=273;
	else if(b==11) x2=304;
	else x2=334;
	if(b>2)
	{
	if((a%4)==0)
	{
		if((a%100)==0)
		{
			if((a%400)!=0) x4=x2;
			else x4=x2+1;
		}
		else x4=x2+1;
	}
	else x4=x2;
	}
	else x4=x2;
	x3=c;
	x=x1+x4+x3;
	y=x%7;
	if(y==1) printf("Mon.\n");
	else if(y==2) printf("Tue.\n");
	else if(y==3) printf("Wed.\n");
	else if(y==4) printf("Thu.\n");
	else if(y==5) printf("Fri.\n");
	else if(y==6) printf("Sat.\n");
	else printf("Sun.\n");
	return 0;
}

