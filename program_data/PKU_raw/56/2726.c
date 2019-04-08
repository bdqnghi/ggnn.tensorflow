int n=0;
void main()
{
	int a,f=0;
	int v(int z);
	int s(int x);
	int h(int y);
	scanf("%d",&a);
	f=v(a);
	printf("%d",f);
}
int s(int x)
{
	int b;
	if (x>9999) b=x/10000;
	else if(x>999) b=x/1000;
	else if(x>99)  b=x/100;
	else if(x>9)  b=x/10;
	else b=x;
	return(b);
}
int h(int y)
{
int b;
	if (y>9999) b=fmod(y,10000);
	else if(y>999) b=fmod(y,1000);
	else if(y>99)  b=fmod(y,100);
	else if(y>9)  b=fmod(y,10);
	else b=0;
	return(b);
}
int v(int z)
{
	int n;
    if (z<10) n=z;
	else n=v(h(z))*10+s(z);
	return(n);
}