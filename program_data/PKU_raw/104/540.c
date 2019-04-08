int main()
{
	int searchjoint(int x,int y);
	int x,y,flag;
	scanf("%d%d",&x,&y);
	if(x==y)
		flag=x;
	else if(x>y)
		flag=searchjoint(y,x);
	else 
		flag=searchjoint(x,y);
	printf("%d",flag);
	return 0;
}
int searchjoint(int x,int y)
{
	int i,j,t,flag=1;
	for(i=0;i<10 && x>=1;i++)
	{
		for(j=0,t=y;j<10 && t>=1;j++)
		{
			t=t/2;
			if(x==t)
			{
				flag=x;
				break;
			}
		}
		if(flag!=1)
			break;
		x=x/2;
	}
	return flag;
}