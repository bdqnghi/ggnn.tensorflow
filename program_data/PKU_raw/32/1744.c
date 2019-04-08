void main()
{
    int i,j,k,n,t[100],n1,n2;
    char a[100],b[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %s",a,b);
		n1=strlen(a);
		n2=strlen(b);
		for(j=n1-1,k=n2-1;k>=0;k--)
		{
			if(a[j]<b[k])
			{
                t[j]=a[j]-b[k]+10;
				a[j-1]=a[j-1]-1;
			}
			else 
			{
				t[j]=a[j]-b[k];
			}
			j--;
		}
		for(j=0;j<n1-n2;j++)
		{
			t[j]=a[j]-'0';
		}
		for(j=0;j<n1;j++)
		{
			printf("%d",t[j]);
		}
		printf("\n");
	}
}
