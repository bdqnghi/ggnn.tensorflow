//#include<stdafx.h>

int reverse(int num)
{
	int y,z=0;

	if(num>0)
	{
		while(num>=1)
		{
                           y=num%10;
			z=10*z+y;
			num=num/10;
		}
	}
         else if(num==0) z=0;
	else
	{
		num=-num;
		while(num>=1)
		{
                            y=num%10;
			z=10*z+y;
			num=num/10;
		}
		z=-z;
	}
	return z;
}

void main()
{
	int a[6],i;

	for(i=0;i<6;i++)
	{
		scanf("%d",&a[i]);
		printf("%d\n",reverse(a[i]));
	}
}