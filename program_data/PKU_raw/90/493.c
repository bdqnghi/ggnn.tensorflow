int f(int m,int n)
{
	if (m<0||n<0) return (0);
	else if(m==1||n==1||m==0||m==1) return (1);
	else 
		return (f(m-n,n)+f(m,n-1));
}
void main()
{
	int x,i,j;
	scanf("%d",&x);
	int s[100][2];
	for (i=0;i<x;i++)
	{
		scanf("%d",&s[i][0]);
		scanf("%d",&s[i][1]);
	}
	for (j=0;j<x;j++)
	   printf("%d\n",f(s[j][0],s[j][1]));
}
