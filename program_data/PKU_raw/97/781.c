int main()
{
    int n,a1=0,a2=0,a3=0,a4=0,a5=0,a6=0,A1=0,A2=0,A3=0,A4=0;
    scanf("%d",&n);
	a1=n/100;
	A1=n-a1*100;
	a2=A1/50;
	A2=A1-a2*50;
	a3=A2/20;
	A3=A2-a3*20;
	a4=A3/10;
	A4=A3-a4*10;
	a5=A4/5;
	a6=A4-a5*5;
	printf("%d\n",a1);
	printf("%d\n",a2);
	printf("%d\n",a3);
	printf("%d\n",a4);
	printf("%d\n",a5);
	printf("%d\n",a6);
	return 0;
}
