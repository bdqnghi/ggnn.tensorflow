void main()
{
	int n,i,age[100],a[100],j=0,k,l,temp,ord[100],o[100];
	char num[100][10],old[100][10],t[10];
	scanf("%d",&n);
	for(i=0;i<n;i++) scanf("%s %d",num[i],&age[i]);
	for(i=0;i<n;i++) ord[i]=i;
	for(i=0;i<n;i++)
	{
		if(age[i]>=60)
		{
            a[j]=age[i];
			o[j]=ord[j];
			strcpy(old[j],num[i]);
			j++;
		}
	}
	for(k=0;k<j;k++)
	{
		for(l=k+1;l<j;l++)
		{
			if(a[k]<a[l])
			{
				temp=a[k];
				a[k]=a[l];
				a[l]=temp;
				temp=o[k];
				o[k]=o[l];
				o[l]=temp;
				strcpy(t,old[k]);
				strcpy(old[k],old[l]);
				strcpy(old[l],t);
			}
		}	
	}
	for(k=0;k<j;k++)
	{
		for(l=k+1;l<j;l++)
		{
			if(a[k]==a[l])
			{
				if(o[k]>o[l])
				{
				    temp=a[k];
				    a[k]=a[l];
				    a[l]=temp;
				    temp=o[k];
				    o[k]=o[l];
				    o[l]=temp;
				    strcpy(t,old[k]);
				    strcpy(old[k],old[l]);
				    strcpy(old[l],t);
				}
			}
		}	
	}
	for(i=0;i<j;i++) printf("%s\n",old[i]);
	for(i=0;i<n;i++)
	{
		if(age[i]<60) printf("%s\n",num[i]);
	}
}
