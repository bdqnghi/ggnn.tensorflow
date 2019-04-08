
int common(int a,int b);
void main()
{
    int x,y;
	scanf("%d %d",&x,&y);
	printf("%d",common(x,y));
}
int common(int a,int b)
{
	if(a==b) return a;
	if(a>b) return common(a/2,b);
	return common(a,b/2);
}