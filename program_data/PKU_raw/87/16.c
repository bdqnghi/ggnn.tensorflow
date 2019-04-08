int g(int ,int ,int ,int ,int ,int );
int main()
{
	int a,b,c,d,e,f,i,s;
	a=b=c=d=e=f=1;
	while(1)
	{
		scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
		if((a*a+b*b+c*c+d*d+e*e+f*f)!=0)
		{
			s=g(a,b,c,d,e,f);
		    printf("%d\n",s);
		}
		else
			break;
	}
	return 0;
}
int g(int a,int b,int c,int d,int e,int f)
{
	int x=0,y,z;
	y=a*3600+b*60+c;
	z=(d+12)*3600+e*60+f;
	x=z-y;
	return x;	
}
