int main(int argc, char* argv[])
{
	int n;
	int y[1000],m1[1000],m2[1000];
	int a,cha;
	int i;
	int tian1,tian2;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf ("%d %d %d",&y[i],&m1[i],&m2[i]);
		if (y[i]%4==0)
		{			
			if (y[i]%100==0)
			{
				if (y[i]%400==0)
				{
					a=29;
				}
				else
				{
					a=28;
				}
			}
			else
			{
				a=29;
			}
		}
		else if (y[i]%4!=0)
		{
			a=28;
		}
		if (m1[i]==1)
		{
			tian1=0;	
		}
		if (m1[i]==2)
		{
			tian1=31;
		}
		if (m1[i]==3)
		{
			tian1=31+a;
		}
		if (m1[i]==4)
		{
			tian1=31+a+31;
		}
		if (m1[i]==5)
		{
			tian1=31+a+31+30;
		}
		if (m1[i]==6)
		{
			tian1=31+a+31+30+31;
		}
		if (m1[i]==7)
		{
			tian1=31+a+31+30+31+30;
		}
		if (m1[i]==8)
		{
			tian1=31+a+31+30+31+30+31;
		}
		if (m1[i]==9)
		{
			tian1=31+a+31+30+31+30+31+31;
		}
		if (m1[i]==10)
		{
			tian1=31+a+31+30+31+30+31+31+30;
		}
		if (m1[i]==11)
		{
			tian1=31+a+31+30+31+30+31+31+30+31;
		}
		if (m1[i]==12)
		{
			tian1=31+a+31+30+31+30+31+31+30+31+30;
		}	
		if (m2[i]==1)
		{
			tian2=0;	
		}
		if (m2[i]==2)
		{
			tian2=31;
		}
		if (m2[i]==3)
		{
			tian2=31+a;
		}
		if (m2[i]==4)
		{
			tian2=31+a+31;
		}
		if (m2[i]==5)
		{
			tian2=31+a+31+30;
		}
		if (m2[i]==6)
		{
			tian2=31+a+31+30+31;
		}
		if (m2[i]==7)
		{
			tian2=31+a+31+30+31+30;
		}
		if (m2[i]==8)
		{
			tian2=31+a+31+30+31+30+31;
		}
		if (m2[i]==9)
		{
			tian2=31+a+31+30+31+30+31+31;
		}
		if (m2[i]==10)
		{
			tian2=31+a+31+30+31+30+31+31+30;
		}
		if (m2[i]==11)
		{
			tian2=31+a+31+30+31+30+31+31+30+31;
		}
		if (m2[i]==12)
		{
			tian2=31+a+31+30+31+30+31+31+30+31+30;
		}
		cha=abs(tian1-tian2);
		if (cha%7==0)
		{
			printf ("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
	return 0;
}

