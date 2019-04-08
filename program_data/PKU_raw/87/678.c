int main()
{
int a,b,c,d,e,f,s;



	scanf("%d""%d""%d""%d""%d""%d",&a,&b,&c,&d,&e,&f);
while (a!=0||b!=0||c!=0||d!=0||e!=0||f!=0)
	{
	d=d+12;
	s=(d-(a+1))*3600+(60-b+e-1)*60+(60-c+f);
	printf ("%d\n",s);
	s=0;
	scanf("%d""%d""%d""%d""%d""%d",&a,&b,&c,&d,&e,&f);
	}






return 0;
}