void main()
{
	
	char ch1[11],a1[4],A[10][14],max;
	int i,j,n,k;
	for(k=0;k<10;k++)
	{
	scanf("%s%s",ch1,a1);
	
    n=strlen(ch1);
	max=ch1[0];
	for(i=0;i<n;i++)
		if(ch1[i]>max)
		{
			j=i;
			max=ch1[i];
		}
		for(i=0;i<=j;i++)
			A[k][i]=ch1[i];
		for(i=j+4;i<n+3;i++)
			A[k][i]=ch1[i-3];
          
		A[k][j+1]=a1[0];
		A[k][j+2]=a1[1];
		A[k][j+3]=a1[2];
		A[k][n+3]='\0';
		if(strcmp(A[k],A[k-1])==0)
			break;
		else
	
		printf("%s\n",A[k]);
		
	}
	
}