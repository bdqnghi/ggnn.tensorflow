int xxx(int high,int j);
int max(int b,int c)
{
	if(b>=c) return b;
	else return c;
} 
int n;
int x[26];
int main()
{
	int i;
	int m,k;
	scanf("%d",&n);
	int h[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&h[i]);
		x[i]=h[i];
		//printf(" %d",x[i]);
	}
	for(i=n;i<26;i++) x[i]=999999;
	int fly;
	fly=xxx(999999,0);
	printf("%d",fly);
	
}
int xxx(int high,int j)
{
	if(j==n-1)
	{
		if(high>=x[j]) return 1;
		else return 0;
	}
	else
	{
		if(high<x[j]) return xxx(high,j+1);
		else return max(1+xxx(x[j],j+1),xxx(high,j+1));
	}
}