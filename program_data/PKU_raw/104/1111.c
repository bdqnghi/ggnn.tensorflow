int way(int x,int a[10])
{
	int i=0;
	while(x>0)
	{
		a[i]=x;
		x=x/2;
		i++;
	}
	return(i);
}
int num(int a[10],int x,int b[10],int y)
{
	int p=0,t=0,i,j;
	for(i=x,j=y;i>0&&j>0;i--,j--)
	if(a[i-1]!=b[j-1])
	{
		t=a[i];
		p++;
		break;
	}
	if(p==0)
	if(x>y) t=b[0];
	else t=a[0];
	return(t);
}
int main()
{
	int x,y,a[10],b[10],m,n,t,i,j;
	scanf("%d%d",&x,&y);
	m=way(x,a);
	n=way(y,b);
	t=num(a,m,b,n);
	printf("%d",t);
	return 0;
}