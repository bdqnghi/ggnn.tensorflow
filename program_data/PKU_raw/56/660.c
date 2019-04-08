void main()
{
	unsigned int a,b,c,d,e,x;	
	scanf("%d",&x);
	a=x/10000;b=x/1000-x/10000*10;c=x/100-x/1000*10;d=x/10-x/100*10;e=x%10;
	if(a!=0)printf("%d\n",a+10*b+100*c+1000*d+10000*e);
	else if(b!=0)printf("%d\n",b+10*c+100*d+1000*e);
	else if(c!=0)printf("%d\n",c+10*d+100*e);
	else if(d!=0)printf("%d\n",d+10*e);
	else if(e!=0)printf("%d\n",e);
}