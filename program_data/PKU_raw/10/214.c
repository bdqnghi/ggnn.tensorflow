
int max(int *p,int num,int height)
{   int missile,case1,case2;
	if(num==1)
	{if(*p<=height)missile=1;
	else missile=0;}
	else
	{case1=max(p+1,num-1,*p)+1;
	case2=max(p+1,num-1,height);
	if(*p<=height&&case1>=case2)missile=case1;
	else missile=case2;
	}
	return(missile);
}
void main()
{
	int a[100],n,i,height=100000,H;
	scanf("%d",&n);
	for(i=0;i<n;i++)scanf("%d",&a[i]);
	H=max(a,n,height);
	printf("%d",H);
}



