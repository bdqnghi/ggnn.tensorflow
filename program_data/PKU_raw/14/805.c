int main()
{
	struct stu{
		int ID,chin,math;
	};
	stu *pp;
	int sum,second,third,x,y,z;
	int i,n;
	int a,b,c;
	scanf("%d",&n);
	pp=(struct stu *)malloc(sizeof(stu)*n);
	for(i=1;i<=n;i++)
	{
		scanf("%d %d %d",&a,&b,&c);
	      (pp+i)->ID=a;
	      (pp+i)->chin=b;
	      (pp+i)->math=c;
	}
	sum = ((pp+i)->chin)+((pp+i)->math);
	for(i=1;i<=n;i++)
	{
		if(i==1)
		{
			sum=((pp+i)->chin)+((pp+i)->math);
			second=((pp+i)->chin)+((pp+i)->math);
			third=((pp+i)->chin)+((pp+i)->math);
			x=(pp+i)->ID;
			y=(pp+i)->ID;
			z=(pp+i)->ID ;

		}
		else if (i==2)
		{
			if (sum<((pp+i)->chin)+((pp+i)->math))
			{
				second=sum;
			    sum=((pp+i)->chin)+((pp+i)->math);
				y=x;
				x=(pp+i)->ID;
			}
                           else
                           {
                                   third=((pp+i)->chin)+((pp+i)->math);
                                   z=(pp+i)->ID;
                            }
		}
		else
		{
			if (sum<((pp+i)->chin)+((pp+i)->math))
			{
                                    third=second;
				second=sum;
			    sum=((pp+i)->chin)+((pp+i)->math);
                                     z=y;
				y=x;
				x=(pp+i)->ID;
			}
			else if (second<((pp+i)->chin)+((pp+i)->math))
			{
				third=second;
				second=((pp+i)->chin)+((pp+i)->math);
				z=y;
				y=(pp+i)->ID;
			}
                           else if (third<((pp+i)->chin)+((pp+i)->math))
                           {
                                    third=((pp+i)->chin)+((pp+i)->math);
                                    z=(pp+i)->ID;
                           }
		}
	}
	    printf("%d %d\n",x,sum);
		printf("%d %d\n",y,second);
		printf("%d %d\n",z,third);
			return 0;
}