void main()
{
	long a;
	int b,c,j,i,k,l;
	scanf("%ld %d %d",&a,&b,&c);
	k=0;
	a=a%400+400;
	for(i=1;i<=(a-1);i++)
	{
		if(i%4!=0) k=k+1;
		else
		{
			if((i%100==0)&&(i%400!=0)) k=k+1;
			else k=k+2;
		}
		if(k==7) k=0;
	}
	if(a%4!=0) l=28;
	else
	{
		if((a%100==0)&&(a%400!=0)) l=28;
		else l=29;
	}
	for(j=1;j<=b-1;j++)
	{
		switch(j)
		{
		case 1:k=k+31;break;
		case 2:k=k+l;break;
		case 3:k=k+31;break;
		case 4:k=k+30;break;
		case 5:k=k+31;break;
		case 6:k=k+30;break;
		case 7:k=k+31;break;
		case 8:k=k+31;break;
		case 9:k=k+30;break;
		case 10:k=k+31;break;
		case 11:k=k+30;break;
	    case 12:k=k+31;break;
		}
		if (k>6) k=k%7;
	}
	k=k+c;
	if (k>6) k=k%7;
	switch(k)
	{
	case 0:printf("Sun.\n");break;
	case 1:printf("Mon.\n");break;
	case 2:printf("Tue.\n");break;
	case 3:printf("Wed.\n");break;
	case 4:printf("Thu.\n");break;
	case 5:printf("Fri.\n");break;
	case 6:printf("Sat.\n");break;
	}
}