
void sort(char a[],long n)
{
	if(n==1)
		return;
	else
	{
		long i,k;
		char temp;
		for(k=0,i=0;i<n;i++)
			if(a[i]>a[k])
				k=i;
		temp=a[k];
		a[k]=a[n-1];
		a[n-1]=temp;//switch
		sort(a,n-1);//sort the rest
	}

}

void main()
{
	char a[N],b[N];
	scanf("%s%s",a,b);

	sort(a,strlen(a));
	sort(b,strlen(b));
	if(strcmp(a,b)==0)
		printf("YES");
	else
		printf("NO");
}