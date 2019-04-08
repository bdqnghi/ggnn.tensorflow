void main()
{
	char a[1000],b[27]={0},d;
	int i,len,n,c[27]={0},k=0,j;
	scanf("%s",a);
	len=strlen(a);
	for(i=0;i<len;i++)
	{
		if(a[i]>='a'&&a[i]<='z')
		{
			for(j=0;j<k;j++)
			{
				if(a[i]==b[j]){c[j]++;break;}
			}
			if(j==k){b[k]=a[i];c[k]++;k++;}
		}
	}
	for(i=0;i<k;i++)for(j=i;j<k;j++)if(b[i]>b[j]){d=b[j];b[j]=b[i];b[i]=d;n=c[j];c[j]=c[i];c[i]=n;}
	if(k==0)printf("No");
	else for(i=0;i<k;i++)printf("%c=%d\n",b[i],c[i]);
}

	
