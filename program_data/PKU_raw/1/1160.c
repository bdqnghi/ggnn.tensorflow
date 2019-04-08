int main()
{
	int fenjie(int m,int i);
	int n,i,c[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&c[i]);
	for(i=0;i<n;i++)
		printf("%d\n",fenjie(c[i],2));
	
	
	return 0;
}

int fenjie(int m,int i)
{
 int l = 1,j;
 int t = sqrt((float)m);
 for (j = i; j <= t; ++j)
 {
  if (m % j == 0)
   l += fenjie(m/j, j);
 }
  return l;
}