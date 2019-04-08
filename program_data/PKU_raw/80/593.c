void main()
{
	int i,s,a,b,c,d,e,f,x,y,z;
	scanf("%d %d %d",&a,&b,&c);
	scanf("%d %d %d",&d,&e,&f);
	s=(d-a)*365;
	for(x=0,i=a;i<=d-1;i++)
	{
		if(i%4==0&&i%100!=0||i%400==0) x=x+1;
	}
	s+=x;s=s-c+f;
	y=30*(b-1); for(x=1;x<b;x++)
	{
		if(x==1||x==3||x==5||x==7||x==8||x==10) y=y+1;
		else if(x==2) {
			if(a%4==0&&a%100!=0||a%400==0) y=y-1;
			else y=y-2;
		}
	}
		z=30*(e-1); for(x=1;x<e;x++)
	{
		if(x==1||x==3||x==5||x==7||x==8||x==10) z=z+1;
		else if(x==2) {
			if(d%4==0&&d%100!=0||d%400==0) z=z-1;
			else z=z-2;
		}
	}
		s=s-y+z;
		printf("%d",s);   
}