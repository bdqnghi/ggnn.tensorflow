int reverse(int num)
{
	int s,j,k;
	k=num;
	int newnum=0;
	int a[100];
	for(s=1;s<100;s++)
	{
		a[s]=k-k/10*10;
		k=k/10;
		if(k==0)
			break;	
	}
	for(j=0;j<s;j++)
	{
		newnum=newnum*10;
		newnum=newnum+a[j+1];
	}
		return newnum;
}
int main()
{

	int n[6],newn[6];
	for(int i=0;i<6;i++)
		scanf("%d",&n[i]);
	for(int i=0;i<6;i++)
	{
		newn[i]=reverse(n[i]);
		printf("%d\n",newn[i]);
	}
	return 0;
}

