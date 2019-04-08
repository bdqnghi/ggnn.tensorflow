int A[10]={0},B[10]={0};
int main()
{
	int x,y,*pt1,*pt2,number1=0,number2=0,flag=0;
	pt1=A;
	pt2=B;
	scanf("%d%d",&x,&y);
	while(x!=0)
	{
		*pt1=x;
		x=x/2;
		pt1++;
		number1++;
	}
	while(y!=0)
	{
		*pt2=y;
		y=y/2;
		pt2++;
		number2++;
	}
	for(pt1=A;pt1<A+number1;pt1++)
	{
		for(pt2=B;pt2<B+number2;pt2++)
		{
			if(*pt1==*pt2)
			{
				printf("%d",*pt1);
				flag=1;
				break;
			}
		}
		if(flag==1)
			break;
	}
	return 0;
}
