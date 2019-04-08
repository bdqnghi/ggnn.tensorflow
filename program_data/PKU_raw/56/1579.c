void main()
{
	int a,b,c,d,e,B,C,D,E;
	scanf("%d",&a);
	b=a%10000;B=a/10000;
	c=b%1000;C=b/1000;
	d=c%100;D=c/100;
	e=d%10;E=d/10;
	if ((a>=10000)&&(a<=99999))
		printf("%d\n",10000*e+1000*E+100*D+10*C+B);
	else if ((a>=1000)&&(a<=9999)) printf("%d\n",1000*e+100*E+10*D+C);
		else if ((a>=100)&&(a<=999)) printf("%d\n",100*e+10*E+D);
		else if ((a>=10)&&(a<=99)) printf("%d\n",10*e+E);
		else printf("%d\n",e);
}

