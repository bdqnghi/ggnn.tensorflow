void main()
{   void sort(char a[],int n);
	char a[100],b[100];
	int i,j,k,m,n;
      scanf("%s %s",a,b);
     m=strlen(a);n=strlen(b);	
	sort(a,m);
	sort(b,n);
	if(strcmp(a,b)==0) printf("YES");
	else printf("NO");
}
void sort(char a[],int n)
{
	int i,j,k;char t;
	for(i=0;i<n-1;i++)
	{
		k=i;
		for(j=i+1;j<n;j++)
			if(a[j]<a[k]) k=j;
			if(k!=i)
			{
				t=a[i];
				a[i]=a[k];
				a[k]=t;
			}
		}
}