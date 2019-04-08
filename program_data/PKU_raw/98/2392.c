int main()
{
    int n,i,c,j;
	char a[300][100];
	int l[300];
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%s",a[i]);
        l[i]=strlen(a[i]);
	}
	c=l[0];j=0;
//	for (i=0;i<n;i++)
//		printf("%d ",l[i]);
    while (j<n)
	{
 	    while ((c<=80)&&(j<n))
		{
 // 		 if (c+l[j]<=80) printf("%s ",a[j]);
			if (c==l[j]) printf("%s",a[j]); else printf(" %s",a[j]);
  		    c++;j++;
  		    c=c+l[j];
		}
  		 printf("\n");
 		c=l[j];
	}
	return 0;
}
