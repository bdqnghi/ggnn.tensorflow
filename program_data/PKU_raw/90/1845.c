int yk(int a,int b);
int qm(int a,int b);
int main()
{
	int t;
	scanf("%d",&t);
	int m[100],n[100];
	int i;
	int result[100];
	for(i=0;i<t;i++)
	{
		scanf("%d%d",&m[i],&n[i]);
		result[i]=yk(m[i],n[i]-1)+qm(m[i]-n[i],n[i]);
	}
	for(i=0;i<t;i++)
		printf("%d\n",result[i]);
	return 0;
}
int yk(int a,int b)
{
	int result1;
	if(b>1)
	{
		result1=yk(a,b-1)+qm(a-b,b);
		return result1;
	}

	if(b==1)
		return 1;
	if(b<=0)
	return 0;
}
int qm(int a,int b)
{
	int result2;
	if(a>1)
	{
		result2=qm(a-b,b)+yk(a,b-1);
		return result2;
	}
	if(a==1||a==0)
		return 1;
	if(a<0)
		return 0;

}











	