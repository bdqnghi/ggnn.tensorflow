int main()
{
	int k,a,b,c,d,e,place; //*place???????*//
	scanf("%ld",&k);
	if (k>9999)
	place=5;
	else if(k>999)
		place=4;
	else if(k>99)
		place=3;
	else if(k>9)
		place=2;
	else place=1;
	switch (place)
	{
	case 1:
		printf("%d\n",k); break;
	case 2:
		d=k/10;
		e=k-d*10;
		printf("%d%d\n",e,d); break;
	case 3:
		c=k/100;
		d=(k-c*100)/10;
		e=k-c*100-d*10;
		printf("%d%d%d\n",e,d,c);break;
	case 4:
		b=k/1000;
		c=(k-b*1000)/100;
	    d=(k-b*1000-c*100)/10;
		e=k-b*1000-c*100-d*10;
		printf("%d%d%d%d\n",e,d,c,b);break;
	case 5:
		a=k/10000;
		b=(k-a*10000)/1000;
		c=(k-a*10000-b*1000)/100;
		d=(k-a*10000-b*1000-c*100)/10;
		e=k-a*10000-b*1000-c*100-d*10;
		printf("%d%d%d%d%d\n",e,d,c,b,a);
    }
	return 0;
}