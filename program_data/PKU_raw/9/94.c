void main()
{
	int n;
	int i,j;
	int k=0;
	char str[100][10]={0};
	char str1[100][10]={0};
	char str2[100][10]={0};
	int temp;
	char t[10]={0};
	int a[100];
    int a1[100]={0};
	int a2[100]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s%d",str[i],&a[i]);
	for(i=0;i<n;i++)
	{
		strcpy(str1[i],str[i]);
		a1[i]=a[i];
	}
	for(i=0;i<n;i++)
		if(a[i]>=60)
		{
			strcpy(str2[k],str[i]);
			a2[k]=a[i];
			k=k+1;
		}
		for(j=1;j<k;j++)
			for(i=0;i<k-j;i++)
				if(a2[i]<a2[i+1])
				{
					temp=a2[i];
					a2[i]=a2[i+1];
					a2[i+1]=temp;
					strcpy(t,str2[i]);
					strcpy(str2[i],str2[i+1]);
					strcpy(str2[i+1],t);

				}
				for(i=0;i<k;i++)
					printf("%s\n",str2[i]);
				for(i=0;i<n;i++)
					if(a1[i]<60)
						printf("%s\n",str1[i]);
		

}