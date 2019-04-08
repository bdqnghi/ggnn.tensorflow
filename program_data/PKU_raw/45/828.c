void main()
{
	int i,j=0,n,s=1,t,k=0;
	char a[50],b[50];
	scanf("%s%s",a,b);
	n=strlen(a);
	do
	{
		t=1;
		for(i=0;i<n;i++)
		{
			if(a[i]!=b[j])
			{
				s=0;
				t=t*s;
			}
			j++;
		}
		k++;
		j=k;
	}while(t==0);
	k=k-1;
	printf("%d",k);
}