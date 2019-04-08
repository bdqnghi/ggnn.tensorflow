int main()
{
	int x,n,z,y;
	scanf("%d%d%d",&x,&n,&z);
    if (x%4==0&&x%100!=0||x%400==0)
	{
		if(n==1)
		{ y=z;
		printf("%d",y);}
		 else if(n==2) 
		 {y=31+z;
		 printf("%d",y);}
		else if(n==3)
		{y=31+29+z;
		printf("%d",y);}
		 else if(n==4)
		 {	y=31*2+29+z;
		 printf("%d",y);}
		else if(n==5)
		{y=31*2+29+30+z;
		printf("%d",y);}
		 else if(n==6)
		 {y=31*3+29+30+z;
		 printf("%d",y);}
		else if(n==7)
		{y=31*3+29+30*2+z;
		printf("%d",y);}
        else if(n==8)
		{	y=31*4+29+30*2+z;
		printf("%d",y);}
       else  if(n==9)
	   {	y=31*5+29+30*2+z;
	   printf("%d",y);}
		else if(n==10)
		{y=31*5+29+30*3+z;
		printf("%d",y);}
	else 	if(n==11)
	{y=31*6+29+30*3+z;
	printf("%d",y);}
		else if(n==12)
		{	y=31*6+29+30*4+z;
		printf("%d",y);}
	}

	else 
	{
		if(n==1)
		{y=z;
		printf("%d",y);}
	else	if(n==2) 
	{	y=31+z;
	printf("%d",y);}
	else	if(n==3)
	{y=31+28+z;
	printf("%d",y);}
		else if(n==4)
		{	y=31*2+28+z;
		printf("%d",y);}
	else	if(n==5)
	{	y=31*2+28+30+z;
	printf("%d",y);}
	else	if(n==6)
	{	y=31*3+28+30+z;
	printf("%d",y);}
	else	if(n==7)
	{	y=31*3+28+30*2+z;
	printf("%d",y);}
        else if(n==8)
		{	y=31*4+28+30*2+z;
		printf("%d",y);}
        else if(n==9)
		{y=31*5+28+30*2+z;
		printf("%d",y);}
		else if(n==10)
		{y=31*5+28+30*3+z;
		printf("%d",y);}
		else if(n==11)
		{y=31*6+28+30*3+z;
		printf("%d",y);}
		else if(n==12)
		{y=31*6+28+30*4+z;
		printf("%d",y);}
	}
	return 0;
}

