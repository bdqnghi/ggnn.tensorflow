int main(int argc, char* argv[])
{   
	int a,a1,a2,a3,a4,a5;
	scanf("%d",&a);
	a5=a/10000;
    a4=(a-a5*10000)/1000;
	a3=(a-a5*10000-a4*1000)/100;
	a2=(a-a5*10000-a4*1000-a3*100)/10;
	a1=(a-a5*10000-a4*1000-a3*100-a2*10);
	if (a5!=0&&a4!=0&&a3!=0&&a2!=0&&a1!=0)
	{printf("%d%d%d%d%d",a1,a2,a3,a4,a5);}
	if (a5==0&&a4!=0&&a3!=0&&a2!=0&&a1!=0)
	{printf("%d%d%d%d",a1,a2,a3,a4);}
	else if (a5==0&&a4==0&&a3!=0&&a2!=0&&a1!=0)
	{printf("%d%d%d",a1,a2,a3);}
	else if (a5==0&&a4==0&&a3==0&&a2!=0&&a1!=0)
	{printf("%d%d",a1,a2);}
	else if (a5==0&&a4==0&&a3==0&&a2==0&&a1!=0)
	{printf("%d",a1);}

	return 0;
}

