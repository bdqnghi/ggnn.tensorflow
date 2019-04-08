void main()
{
	int a,b=3,c=5,d=7;
	char e='n';
	scanf("%d",&a);
	if(a%b==0 && a%c==0 && a%d==0)
		printf("%d %d %d",b,c,d);
	if(a%b==0 && a%c==0 && a%d!=0)
		printf("%d %d",b,c);
	if(a%b==0 && a%c!=0 && a%d==0)
		printf("%d %d",b,d);
	if(a%b!=0 && a%c==0 && a%d==0)
		printf("%d %d",c,d);
	if(a%b!=0 && a%c!=0 && a%d==0)
		printf("%d",d);
	if(a%b!=0 && a%c==0 && a%d!=0)
		printf("%d",c);
	if(a%b==0 && a%c!=0 && a%d!=0)
		printf("%d",b);
	if(a%b!=0 && a%c!=0 && a%d!=0)
		printf("%c",e);
}
