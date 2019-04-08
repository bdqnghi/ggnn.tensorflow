int s[26];
int f(int j);

void main()
{
	int i,k,t;
	scanf("%d",&k);
	for(i=1;i<=k;i++)
		scanf("%d",&s[i]);
	for(t=0,i=1;i<=k;i++)
	{
		if(f(i)>t)
			t=f(i);
	}
	printf("%d\n",t);
}

int f(int j)
{
	int z,i,t;
	if(j==1) z=1;
	else 
	{
		for(t=0,i=1;i<j;i++)
		{
        	if(s[i]>=s[j] && f(i)>t)
				t=f(i);
		}
       	z=t+1;
	}
	return z;
}