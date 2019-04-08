void main()
{
	int n,i,j,k,t;
	int a[100]={0},b[100]={0};
	char id[100][20],temp[20],s[100][20];

	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s %d",id[i],&a[i]);
	for(i=0,j=0;i<n;i++)
		if(a[i]>=60)
		{
			b[j]=a[i];
			strcpy(s[j],id[i]);
			j=j+1;
		}


	for(i=0;i<j;i++)
		for(k=0;k<j-i;k++)
			if(b[k]<b[k+1])
			{t=b[k];b[k]=b[k+1];b[k+1]=t;strcpy(temp,s[k]);strcpy(s[k],s[k+1]);strcpy(s[k+1],temp);}
	for(k=0;k<j;k++)
		printf("%s\n",s[k]);
	for(i=0;i<n;i++)
		if(a[i]<60)
			printf("%s\n",id[i]);

}