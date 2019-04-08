

void main()
{
	int n,k,a[MAX];
	int i,j,flag=0;

	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
		scanf("%d",a+i);

	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(*(a+i)+*(a+j)==k){
				flag=1;
				break;
			}
		}
	}

	if(flag)
		printf("yes\n");
	else
		printf("no\n");
}