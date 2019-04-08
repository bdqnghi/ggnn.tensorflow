int main(int argc, char* argv[])
{
	int n,i,j,k,s;
	int a[1000],flag=0;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		s=k-a[i];
		for(j=i+1;j<n;j++)
		{
			if(s==a[j]){
				flag=1;
				break;
			}
		}
	}
	if(flag){
		printf("yes\n");
	}
	else{
		printf("no\n");
	}
	return 0;
}

