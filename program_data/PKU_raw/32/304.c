void main()
{
	char str1[60][100],str2[60][100],b[100];
	int i,k,c,n,j,t;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s%s",str1[i],str2[i]);
		printf("\n");
	}
    for(i=0;i<n;i++)
	{
		t=strlen(str2[i]);
        c=strlen(str1[i]);
		k=c-t;
		for(j=t-1;j>=0;j--)
		{
			if(str1[i][k+j]>=str2[i][j]) b[k+j]=str1[i][k+j]-str2[i][j];
			else {b[k+j]=str1[i][k+j]+10-str2[i][j];str1[i][k+j-1]-=1;}
		}
		for(j=0;j<k;j++) b[j]=str1[i][j]-48;
		for(j=0;j<c;j++) printf("%d",b[j]);
		printf("\n");
	}
}
			       
		
	

