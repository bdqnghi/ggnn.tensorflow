
int n1;
int m[20];
int n[20];
int ans[20];
int i;

int count(int a,int p);

int main(void)
{
	scanf("%d",&n1);
	for(i=0;i<n1;i++)
	{
		scanf("%d %d",&m[i],&n[i]);
			ans[i]=count(m[i],n[i]);
	}
	for(i=0;i<n1;i++)
	{
		printf("%d\n",ans[i]);
	}
	return 0;
}
int count(int a,int p)
{
	int answer;
	if(p==1 ||a==0)
		return 1;
	if(a<p)
		return count(a,a);
	else
	{
        return (count(a,p-1)+count(a-p,p));
	}
}
	
