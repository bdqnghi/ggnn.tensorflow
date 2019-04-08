
void main()
{
	int m,n,i,j,root=0,a[10]={0},b[10];
	scanf("%d%d",&m,&n);
	a[0]=m;b[0]=n;
	for(i=0;a[i]>1;i++)
		a[i+1]=a[i]/2;
	for(j=0;b[j]>1;j++)
		b[j+1]=b[j]/2;
	for(i=0;a[i]>1;i++)
	{
		for(j=0;b[j]>1;j++)
		{
			if(a[i]==b[j])
			{
				root=a[i];
				break;
			}
		}
		if(root!=0)break;
	}
	if(root==0)root=1;
		printf("%d",root);
}
