int main(){
	int n,m,i,j,k;
	int p[100001];
    scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&p[i]);
	scanf("%d",&m);
	for(j=0;j<n;j++)
	{
		if(p[j]!=m)
		{
			printf("%d",p[j]);
			break;
		}
	}
	for(k=(j+1);k<n;k++)
	{
		if(p[k]!=m)
			printf(" %d",p[k]);
	}

	return 0;
}