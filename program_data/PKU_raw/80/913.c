int main()
{
	int a1,b1,c1,d1,a2,b2,c2,d2,r1=0,i,d;
	scanf("%d%d%d",&a1,&b1,&c1);
	scanf("%d%d%d",&a2,&b2,&c2);
	for(i=a1+1;i<=a2-1;i++)
	{
		if((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
			r1++;
	}
	if(b1==1)
		d1=c1;
	else if(b1==2)
		d1=31+c1;
	else if(b1==3)
		d1=59+c1;
	else if(b1==4)
		d1=90+c1;
	else if(b1==5)
		d1=120+c1;
	else if(b1==6)
		d1=151+c1;
	else if(b1==7)
		d1=181+c1;
	else if(b1==8)
		d1=212+c1;
	else if(b1==9)
		d1=243+c1;
	else if(b1==10)
		d1=273+c1;
	else if(b1==11)
		d1=304+c1;
	else
		d1=334+c1;
	if(b2==1)
		d2=c2;
	else if(b2==2)
		d2=31+c2;
	else if(b2==3)
		d2=59+c2;
	else if(b2==4)
		d2=90+c2;
	else if(b2==5)
		d2=120+c2;
	else if(b2==6)
		d2=151+c2;
	else if(b2==7)
		d2=181+c2;
	else if(b2==8)
		d2=212+c2;
	else if(b2==9)
		d2=243+c2;
	else if(b2==10)
		d2=273+c2;
	else if(b2==11)
		d2=304+c2;
	else
		d2=334+c2;
	if((a1 % 4 == 0 && a1 % 100 != 0) || (a1 % 400 == 0)&&(d1<50))
		r1++;
	if((a2 % 4 == 0 && a2 % 100 != 0) || (a2 % 400 == 0)&&(d2>50))
		d2++;
	if(a2!=a1)
		d=d2-d1+r1+365*(a2-a1);
	else
		d=d2-d1+r1;
	printf("%d",d);
}