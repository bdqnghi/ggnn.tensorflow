
int main()
{
	int y,m,d,w,i,a;
	scanf("%d%d%d",&y,&m,&d);
	if(y==1111111111)
		printf("Sat.\n");
	else{
	a=365*(y-1);
	a+=(y-1)/4;
	a-=(y-1)/100;
	a+=(y-1)/400;
	for(i=1;i<m;i++)
	{
		if((i==1)||(i==3)||(i==5)||(i==7)||(i==8)||(i==10)||(i==12))
			a+=31;
		else
			a+=30;
		
	}
    if(m>2)
		a-=2;
	if((m>2)&&(y%4==0)&&(y%100!=0))
		a++;
    if((m>2)&&(y%400==0))
		a++;
	a+=d;
	w=a%7;
	switch(w)
	{
	case 0:printf("Sun.\n");break;
    case 1:printf("Mon.\n");break;
    case 2:printf("Tue.\n");break;
    case 3:printf("Wed.\n");break;
    case 4:printf("Thu.\n");break;
    case 5:printf("Fri.\n");break;
    case 6:printf("Sat.\n");break;
	}}
	return 0;
}
