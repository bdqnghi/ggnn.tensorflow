void main()
{
	int a,b,c,d,e,f,g,h,j,k,n;
	h=0;
	int t(int l,int m);
	scanf ("%d %d %d",&a,&b,&c);
	scanf ("%d %d %d",&d,&e,&f);
	for (g=a+1;g<=d;g++)
	{
		if(g%400==0||(g%4==0&&g%100!=0))
		{
			h+=1;
		}
	}
	int days[12]={0,31,59,90,120,151,181,212,243,273,304,334};
	j=days[b-1];
    k=days[e-1];
	n=365*(d-a)+h+t(a,b)-t(d,e)-j+k-c+f;
	printf("%d\n",n);
}
int t(int l,int m)
{
	int i=0;
	if(l%400==0||(l%4==0&&l%100!=0)&&(m==1||m==2))
	i=1;
	return(i);
}