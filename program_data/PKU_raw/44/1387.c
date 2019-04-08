int main ()
{
	int a[6],i,b[6];
	int reverse(int num);
	for (i=0;i<6;i++)
	{
		scanf("%d",&a[i]);
		b[i]=reverse(a[i]);     //????a[i],???????b[i]//
	}
	for(i=0;i<6;i++)
		printf("%d\n",b[i]);
	return 0;
}

reverse(int num)
{
	int x=0,i,weishu;
	int a[15]={0};
	if(num>=0)   //?????//
	{
	for (i=0;;i++)
	{
		if((num/(pow(10,x)))<1)       //????????????//
		{
			weishu=i-1;
			break;
		}
		a[i]=((int)(num/(pow(10,x))))%10;	//????????//
		x=x+1;
	}
	x=0;
	num=0;
	for(i=weishu;i>=0;i--)       //??//
	{
		num=num+a[i]*(pow(10,x));         //?????//
	    x=x+1;
	}
	}
	if(num<0)  //????//
	{
		num=-num;      //????//
		for (i=0;;i++)
		{
			if((num/(pow(10,x)))<1)
			{
				weishu=i-1;
				break;
			}
			a[i]=((int)(num/(pow(10,x))))%10;	
			x=x+1;
		}
		x=0;
		num=0;
		for(i=weishu;i>=0;i--)
		{
			num=num+a[i]*(pow(10,x));
		 x=x+1;
		}
		num=-num;     //??????????//
	}	
	return (num);
}
