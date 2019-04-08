void main()
{
	int n,a[300];
	int i,p=0;
	int j=0;
	int c;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
    for(i=0;i<n;i++)
	{     
		 c=1;
		 for(j=0;j<i;j++)
			 if(a[j]==a[i])
			 {
				 c=0;
				 break;
			 }
			if(p&&c)
				printf(",%d",a[i]);
			else if(c)
			{
				printf("%d",a[i]);
				p=1;
			}
	}

}