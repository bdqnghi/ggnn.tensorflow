/* Note:Your choice is C IDE */
main()
{
	int i,a[20],b[20],c[20],x,day;
	for(i=1;i<=5;i++)
	{
		scanf("%d %d %d",&a[i],&b[i],&c[i]);
	}
	for(i=1;i<=5;i++)
	{
		if(a[i]%4==0&&a[i]%100!=0||a[i]%400==0)
		{
			if(b[i]==1)day=c[i];
			else if(b[i]==2)day=c[i]+31;
			else if(b[i]==3)day=c[i]+31+29;
			else if(b[i]==4)day=c[i]+31+29+31;
			else if(b[i]==5)day=c[i]+31+29+31+30;
			else if(b[i]==6)day=c[i]+31+29+31+30+31;
			else if(b[i]==7)day=c[i]+31+29+31+30+31+30;
			else if(b[i]==8)day=c[i]+31+29+31+30+31+30+31;
			else if(b[i]==9)day=c[i]+31+29+31+30+31+30+31+31;
			else if(b[i]==10)day=c[i]+31+29+31+30+31+30+31+31+30;
			else if(b[i]==11)day=c[i]+31+29+31+30+31+30+31+31+30+31;
			else if(b[i]==12)day=c[i]+31+29+31+30+31+30+31+31+30+31+30;
		}
		else
		{ 
			if(b[i]==1)day=c[i];
			else if(b[i]==2)day=c[i]+31;
			else if(b[i]==3)day=c[i]+31+28;
			else if(b[i]==4)day=c[i]+31+28+31;
			else if(b[i]==5)day=c[i]+31+28+31+30;
			else if(b[i]==6)day=c[i]+31+28+31+30+31;
			else if(b[i]==7)day=c[i]+31+28+31+30+31+30;
			else if(b[i]==8)day=c[i]+31+28+31+30+31+30+31;
			else if(b[i]==9)day=c[i]+31+28+31+30+31+30+31+31;
			else if(b[i]==10)day=c[i]+31+28+31+30+31+30+31+31+30;
			else if(b[i]==11)day=c[i]+31+28+31+30+31+30+31+31+30+31;
			else if(b[i]==12)day=c[i]+31+28+31+30+31+30+31+31+30+31+30;
		}
		printf("%d\n",day);
	}
	
		
    
}