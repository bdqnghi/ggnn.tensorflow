int x,y;
int *p1=&x;
int *p2=&y;
void Read()
{
	scanf("%d%d",p1,p2);
}
/*int array for Pathway a[11],b[11]*/
int a[11]={0},b[11]={0};
/*int Function return Answer (x>=2^(Answer-1)&&x<(2^Answer))   as  FuncofA  */
int FuncofA(int X)
{
	int i;
	for(i=1;;i++)
	{
		if((pow(2.0,i-1)<=X)&&pow(2.0,i)>X)
		{
			return i;
		}
		else
		{}
	}
}
/*Function for binary tree  as  FuncofB*/
void FuncofB()
{
	int i;
	for(i=(FuncofA(x));i>=1;i--)
	{
		a[i-1]=x;
		x/=2;
	}
	for(i=(FuncofA(y));i>=1;i--)
	{
		b[i-1]=y;
		y/=2;
	}
}
void main()
{
	Read();
	if(x==y)
	{
		goto equal;
	}
	else
	{
		goto unequal;
	}
equal:
	printf("%d",x);
	goto End;
unequal:
	FuncofB();
	int i;
	for(i=1;;i++)
	{
		if(a[i-1]==b[i-1])
		{}
		else
		{
			printf("%d",a[i-2]);
			break;
		}
	}
End:
	;
}