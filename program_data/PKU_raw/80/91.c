int main()
{
	int y1,y2,m1,m2,d1,d2;
	int i,j,a;
	i=1;
	j=1;
	scanf("%d %d %d",&y1,&m1,&d1);
	scanf("%d %d %d",&y2,&m2,&d2);
	int leap;
	long int yi;
	yi=0;
	while (i<y1)
	{
		if(i%4==0)
		{
			if(i%100==0)
			{
				if(i%400==0)
					leap=1;
				else
					leap=0;
			}
			else leap=1;
		}
		else
			leap=0;
		i++;
		if(leap)
			yi=yi+366;
		else
			yi=yi+365;
	}
	int l;
	if(y1%4==0)
		{
			if(y1%100==0)
			{
				if(y1%400==0)
					l=1;
				else
					l=0;
			}
			else l=1;
		}
		else
			l=0;
		if(l=1)
			switch(m1)
{
case 1:yi=yi+d1;break;
case 2:yi=yi+31+d1;break;
case 3:yi=yi+31+29+d1;break;
case 4:yi=yi+31+29+31+d1;break;
case 5:yi=yi+31+29+31+30+d1;break;
case 6:yi=yi+31+29+31+30+31+d1;break;
case 7:yi=yi+31+29+31+30+31+30+d1;break;
case 8:yi=yi+31+29+31+30+31+30+31+d1;break;
case 9:yi=yi+31+29+31+30+31+30+31+31+d1;break;
case 10:yi=yi+31+29+31+30+31+30+31+31+30+d1;break;
case 11:yi=yi+31+29+31+30+31+30+31+31+30+31+d1;break;
case 12:yi=yi+31+29+31+30+31+30+31+31+30+31+30+d1;break;
		}
		else
			switch(m1)
{
case 1 :yi=yi+d1;break;
case 2 :yi=yi+31+d1;break;
case 3 :yi=yi+31+28+d1;break;
case 4 :yi=yi+31+28+31+d1;break;
case 5 :yi=yi+31+28+31+30+d1;break;
case 6 :yi=yi+31+28+31+30+31+d1;break;
case 7 :yi=yi+31+28+31+30+31+30+d1;break;
case 8 :yi=yi+31+28+31+30+31+30+31+d1;break;
case 9 :yi=yi+31+28+31+30+31+30+31+31+d1;break;
case 10 :yi=yi+31+28+31+30+31+30+31+31+30+d1;break;
case 11 :yi=yi+31+28+31+30+31+30+31+31+30+31+d1;break;
case 12 :yi=yi+31+28+31+30+31+30+31+31+30+31+30+d1;break;
		}
long int yj;
yj=0;
while (j<y2)
	{
		if(j%4==0)
		{
			if(j%100==0)
			{
				if(j%400==0)
					leap=1;
				else
					leap=0;
			}
			else leap=1;
		}
		else
			leap=0;
		j++;
		if(leap)
			yj=yj+366;
		else
			yj=yj+365;
	}
	int l2;
	if(y2%4==0)
		{
			if(y2%100==0)
			{
				if(y2%400==0)
					l2=1;
				else
					l2=0;
			}
			else l2=1;
		}
		else
			l2=0;
		if(l2=1)
			switch(m2)
{
case 1 :yj=yj+d2;break;
case 2 :yj=yj+31+d2;break;
case 3 :yj=yj+31+29+d2;break;
case 4 :yj=yj+31+29+31+d2;break;
case 5 :yj=yj+31+29+31+30+d2;break;
case 6 :yj=yj+31+29+31+30+31+d2;break;
case 7 :yj=yj+31+29+31+30+31+30+d2;break;
case 8 :yj=yj+31+29+31+30+31+30+31+d2;break;
case 9 :yj=yj+31+29+31+30+31+30+31+31+d2;break;
case 10 :yj=yj+31+29+31+30+31+30+31+31+30+d2;break;
case 11 :yj=yj+31+29+31+30+31+30+31+31+30+31+d2;break;
case 12 :yj=yj+31+29+31+30+31+30+31+31+30+31+30+d2;break;
		}
		else
			switch(m2)
{
case 1 :yj=yj+d2;break;
case 2 :yj=yj+31+d2;break;
case 3 :yj=yj+31+28+d2;break;
case 4 :yj=yj+31+28+31+d2;break;
case 5 :yj=yj+31+28+31+30+d2;break;
case 6 :yj=yj+31+28+31+30+31+d2;break;
case 7 :yj=yj+31+28+31+30+31+30+d2;break;
case 8 :yj=yj+31+28+31+30+31+30+31+d2;break;
case 9 :yj=yj+31+28+31+30+31+30+31+31+d2;break;
case 10 :yj=yj+31+28+31+30+31+30+31+31+30+d2;break;
case 11 :yj=yj+31+28+31+30+31+30+31+31+30+31+d2;break;
case 12 :yj=yj+31+28+31+30+31+30+31+31+30+31+30+d2;break;
		}
	a=yj-yi;
	printf("%d",a);
	return 0;

}