int div(int a)
{
	if(a%2==1)a=(a-1)/2;
	else a=a/2;
	return a;
}
int compare(int a, int b)
{
	if(a>b){
		a=div(a);
		compare(a,b);}
	else if (a<b){
		b=div(b);
		compare(a,b);}
	else return(a);
}
void main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	a=compare(a,b);
	printf("%d",a);
}