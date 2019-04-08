int main(){
	int n,x,j,l,k;
	int i=1;
	int a[10000];
	scanf("%d",&n);
	while(i<=n)
	{
		scanf("%d",&x);
		a[0]=1;
		a[1]=1;
		if(x==1||x==2)
			printf("1");
		else
		{
			j=2;
		    while(j<x)
			{
			    a[j]=a[j-1]+a[j-2];
		        j++;
			}
			printf("%d\n",a[j-1]);
		}
		i++;
	}
	return 0;
}