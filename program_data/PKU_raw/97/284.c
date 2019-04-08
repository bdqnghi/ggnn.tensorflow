int main(int argc, char* argv[])
{
	int n;
	scanf("%d",&n);
	int num1=n/100;printf("%d\n",num1);
	n-=num1*100;
    int num2=n/50;printf("%d\n",num2);
	n-=num2*50;
	int num3=n/20;printf("%d\n",num3);
	n-=num3*20;
	int num4=n/10;printf("%d\n",num4);
	n-=num4*10;
	int num5=n/5;printf("%d\n",num5);
	n-=num5*5;
	int num6=n;printf("%d\n",num6);

	return 0;
}