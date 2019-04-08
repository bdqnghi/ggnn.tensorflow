void main()
{
    int i,a[6];
	int reverse(int num); 
	for(i=0;i<6;i++)
	{
		scanf("%d",&a[i]);
	}
    for(i=0;i<6;i++)
    {
		printf("%d\n",reverse(a[i]));
	}
}
    int reverse(int num)
	{
		int i,x[5],y=0,a,j;
		for(i=0;i<5;i++)
		{
             x[i]=num%10;
			 num=(num-x[i])/10;
		}
		for(i=4;i>=0;i--)
		{
            if(x[i]!=0) 
			{
				a=i;
			    break;
			}
		}
		for(i=a;i>=0;i--)
		{
			for(j=0;j<=i;j++)
			{
			x[a-i]=x[a-i]*10;
			}
			y=y+x[a-i];
		}
		y=y/10;
		if(num<0) y=-y;
		else y=y;
		return(y);

	}
