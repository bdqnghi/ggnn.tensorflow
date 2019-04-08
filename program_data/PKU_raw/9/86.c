void main()
{
	int n,i,j;
	int a[200],t;
	char b[200][11],b1[11];

	scanf("%d",&n);
	for(i=0;i<n;i++)
         scanf("%s %d",&b[i],&a[i]);

	for(i=0;i<n;i++)
	    for(j=0;j<n-i;j++)
			if(a[j+1]>=60&&a[j]<a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			    strcpy(b1,b[j]);
                               strcpy(b[j],b[j+1]);
                               strcpy(b[j+1],b1);
			}

	for(i=0;i<n;i++)
         printf("%s\n",b[i]);

}

