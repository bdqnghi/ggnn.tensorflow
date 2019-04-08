int fan2(int a1)
{
	int b1;
	int c1,c2;
	c2=a1%10;
	c1=a1/10;
	b1=10*c2+c1;
	return(b1);
}
int fan3(int a2)
{
	int b2;
	int c1,c2,c3;
	c1=a2%10;
	c2=((a2-c1)%100)/10;
	c3=a2/100;
	b2=100*c1+10*c2+c3;
	return(b2);
}
int fan4(int a3)
{
	int b3;
	int c1,c2,c3,c4;
	c1=a3%10;
	c2=((a3-c1)%100)/10;
	c3=((a3-c1-10*c2)%1000)/100;
	c4=a3/1000;
	b3=1000*c1+100*c2+10*c3+c4;
	return(b3);
}
int fan5(int a4)
{
	int b4;
	int c1,c2,c3,c4,c5;
	c1=a4%10;
	c2=((a4-c1)%100)/10;
	c3=((a4-c1-10*c2)%1000)/100;
	c4=((a4-c1-10*c2-100*c3)%10000)/1000;
	c5=a4/10000;
	b4=10000*c1+1000*c2+100*c3+10*c4+c5;
	return(b4);
}
void main()
{
	int a[6];
	int b[6];
	int i;
	for (i=0;i<=5;i++)
	{
		scanf("%d",&a[i]);
	}
	for (i=0;i<=5;i++)
	{
	if (a[i]<10&&a[i]>-10)
	{
		b[i]=a[i];
	}
	else if (a[i]<100&&a[i]>-100)
	{
		b[i]=fan2(a[i]);
	}
	else if (a[i]<1000&&a[i]>-1000)
	{
		b[i]=fan3(a[i]);
	}
	else if (a[i]<10000&&a[i]>-10000)
	{
		b[i]=fan4(a[i]);
	}
	else 
	{
		b[i]=fan5(a[i]);
	}
	printf("%d\n",b[i]);
	}
}