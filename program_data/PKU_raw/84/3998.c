int main()
{
	int n,a,b,c,max1,max2,place1,place2;
	scanf("%d",&n);
	scanf("%d\n%d",&a,&b);
	if(a>b) place1=1;
	else place1=2;
	switch(place1)
	{case 1: max1=a;
	        max2=b;
			break;
    case 2: max1=b;
		    max2=a;
			break;}
	n=n-2;
    while(n--)
	{
		scanf("%d",&c);
		if(c<=max2) place2=1;
		else if (c<max1) place2=2;
		else place2=3;
		switch(place2)
		{case 1: break;
		case 2: max2=c;
			    break;
		case 3: max2=max1;
			    max1=c;
				break;}

	}
	printf("%d\n%d",max1,max2);
	return 0;

}