
void common(int a,int b);
void main()
{
    int x,y;
	scanf("%d %d",&x,&y);
	common(x,y);
}
void common(int a,int b)
{
	if(a==b) printf("%d",a);
    else if((a/2)==b) printf("%d",b);
    else if(a==(b/2)) printf("%d",a);
    else if(a/2>b) common(a/2,b);
	else if(b/2>a) common(a,b/2);
    else common(a/2,b/2);
}