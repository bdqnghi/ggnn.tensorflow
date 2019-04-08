void sort(int array[],int n)
{ 
	int i,j,k,t;
	for(i=0;i<n-1;i++)
	{ 
		k=i;
		for(j=i+1;j<n;j++)
			if(array[j]<array[k]) k=j;
			if(k!=i)
			{
				t=array[i];
				array[i]=array[k];
				array[k]=t;
			}
	}
}
main()
{
	char a[100],b[100];
	int a1[100],b1[100];
	int l1,l2,i,j,k=0;
	scanf("%s%s",a,b);
	l1=strlen(a);
	l2=strlen(b);
    for(i=0;i<l1;i++)
		a1[i]=(int)a[i];
	for(j=0;j<l2;j++)
		b1[j]=(int)b[j];
	sort(a1,l1);sort(b1,l2);
	if(l1!=l2) printf("NO");
	else 
	{
		for(i=0;i<l1;i++)
		{
			if(a1[i]!=b1[i])
			{
				printf("NO");
				k=1;
				break;
			}
		}
		if(k==0) printf("YES");
	}
}