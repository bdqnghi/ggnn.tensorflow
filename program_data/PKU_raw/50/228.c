void main()
{
	int i;
	int r[13];
	int y[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	scanf("%d",&r[0]);
	r[1]=r[0]+12;
	for(i=2;i<13;i++)
		r[i]=r[i-1]+y[i-2];
	for(i=1;i<13;i++)
		if(r[i]%7==5)
			printf("%d\n",i);


}

