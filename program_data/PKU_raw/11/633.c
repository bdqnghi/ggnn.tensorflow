// ???.cpp : Defines the entry point for the console application.
//


int main()
{
	int y=0,m=0,d=0;
    int dd[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int n=0;
	int i;

	scanf("%d%d%d",&y,&m,&d);
	if((y%400==0)||((y%4==0)&&(y%100!=0)))
	{
		dd[1]=29;
	}

	for(i=0;i<m-1;i++){
		n=n+dd[i];
	}

	n=n+d;
	printf("%d",n);
	return 0;
}
