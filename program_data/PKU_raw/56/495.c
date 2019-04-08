
int main()
{
	int n1,n2,n3,n4,n5,a;
	scanf("%d",&a);
	if(a>=10000)
	{
		n1=(int)(a/10000);
		n2=(int)((a-n1*10000)/1000);
		n3=(int)((a-n1*10000-n2*1000)/100);
		n4=(int)((a-n1*10000-n2*1000-n3*100)/10);
		n5=a-n1*10000-n2*1000-n3*100-n4*10;
		printf("%d%d%d%d%d\n",n5,n4,n3,n2,n1);
	}
	if(a<10000 && a>=1000)
	{
		n1=(int)(a/1000);
		n2=(int)((a-n1*1000)/100);
		n3=(int)((a-n1*1000-n2*100)/10);
		n4=a-n1*1000-n2*100-n3*10;
		printf("%d%d%d%d\n",n4,n3,n2,n1);
	}
	if(a<1000 && a>=100)
	{
		n1=(int)(a/100);
		n2=(int)((a-n1*100)/10);
		n3=a-n1*100-n2*10;
		printf("%d%d%d\n",n3,n2,n1);
	}
	if(a<100 && a>=10)
	{
		n1=(int)(a/10);
		n2=a-n1*10;
		printf("%d%d\n",n2,n1);
	}
	return 0;
}