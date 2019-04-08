int ss(int n)
{
	int i,t=0;
	scanf("%d",&n);
	for(i=2;i<=(n/2);i++)
	 {
		if(n%i==0)
		{
			t=1;
			break;
		}
	 }
	if(t==1)
	{
		return 0;
	}
	else
	{
		return n;
	}
}
int main()
{
	int m,a,b;
	scanf("%d",&m); 
	for(a=3;a<=(m/2);a++)
	{
		b=m-a;
	       if(m==ss(a)+ss(b))
			{
               printf("%d %d\n",ss(a),ss(b));
			}
	}
	return 0;
}