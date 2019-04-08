
int main()
{
	int i,j,s1,s2,q1,q2,a,b,t,k,p,s;
	scanf("%d",&k);
	for(i=1;i<=k;i++)
	{
		int pi[100001];
		s1=0;
		s2=0;
		q1=0;
		q2=0;
		scanf("%d %d",&a,&b);
		for(j=1;j<=a*b;j++)
		{
			scanf("%d",pi+j-1);
		}
		for(t=1;t<=b;t++)
		{
			s1=s1+*(pi+t-1);
			s2=s2+*(pi+a*b-t);
		}
		for(p=1;p<a-1;p++)
		{
			q1=q1+*(pi+p*b);
			q2=q2+*(pi+b-1+p*b);
		}
		s=s1+s2+q1+q2;
		if(a==1&b==1)
		{
			printf("%d\n",s/2);
		}
		else
		{
			printf("%d\n",s);
		}
	}
	return 0;
}
