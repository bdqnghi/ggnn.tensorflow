void main()
{
	int a=3,b=5,c=7,d;
	scanf("%d",&d);
	if(d%(a*b*c)==0) printf("%d %d %d",a,b,c);
	else if(d%(a*b)==0) printf("%d %d",a,b);
	else if(d%(a*c)==0) printf("%d %d",a,c);
	else if(d%(b*c)==0) printf("%d %d",b,c);
	else if(d%a==0) printf("%d",a);
	else if(d%b==0) printf("%d",b);
	else if(d%c==0) printf("%d",c);
	else printf("n");
}
