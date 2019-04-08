void main()
{
	int reverse(int num); 
	int i,num;
	for(i=0;i<6;i++)
	{
		scanf("%d",&num);
		printf("%d\n",reverse(num));
	}
}

int reverse(int num)
{
	int numr,i,j,digit[10],flag=0;
	if (num<0) {num=-num;flag=1;}
	for(i=0;;i++)
	{
		digit[i]=num%10;
		num=(num-digit[i])/10;
		if(num==0) break;
	}
	numr=0;
	for(j=0;j<=i;j++)	numr=numr*10+digit[j];
	if (flag==1) numr=-numr;
	return numr;
}



	

