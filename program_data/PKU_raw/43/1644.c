int main()
{
	int panduan(int x);
    int m,i,j,a,b;
	scanf("%d",&m);
	for(i=3;i<=m/2;i=i+2)
	{
		j=m-i;
		a=panduan(i);
		b=panduan(j);
		if((a==1)&&(b==1))
			printf("%d %d\n",i,j);
	}
    return 0;
}
int panduan(int x)
{
	int i;
	for(i=3;i<x/2;i++)
		if(x%i==0)
		{
			return(0);break;
		}
	return(1);
}