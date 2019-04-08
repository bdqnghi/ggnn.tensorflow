int main()
{
	int b,a[5],j;
	scanf("%d",&b);
	a[4]=b/10000;
	a[3]=(b-a[4]*10000)/1000;
	a[2]=(b-a[4]*10000-a[3]*1000)/100;
	a[1]=(b-a[4]*10000-a[3]*1000-a[2]*100)/10;
	a[0]=b-a[4]*10000-a[3]*1000-a[2]*100-a[1]*10;
	if (b>=10000)
			for (j=0;j<=4;j++)
				printf("%d",a[j]);
	else if (b>=1000)
			for (j=0;j<=3;j++)
				printf("%d",a[j]);
	else if (b>=100)
			for (j=0;j<=2;j++)
				printf("%d",a[j]);
	else if (b>=10)
			for (j=0;j<=1;j++)
				printf("%d",a[j]);
	else
				printf("%d",a[0]);

}
