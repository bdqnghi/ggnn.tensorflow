void main()
{
    int i=0,j,k,a[1000][2],b[1002]={0},l,m=0,n=0,max=0;
	char c[2][5000];
	scanf("%s%s",c[0],c[1]);a[0][0]=0;a[0][1]=0;
	for(i=0;i<strlen(c[0]);i++)
	{
		
		if(c[0][i]==',')
		{
			m++;
			a[m][0]=0;
		}
		else{a[m][0]=a[m][0]*10+(c[0][i]-48);}
          }
          for(i=0;i<strlen(c[1]);i++)
        {
                   if(c[1][i]==',')
		{
			n++;
			a[n][1]=0;
		}
		else{a[n][1]=a[n][1]*10+(c[1][i]-48);}
	}
	printf("%d ",m+1);
	for(i=0;i<=m;i++)
	{
		for(j=a[i][0];j<a[i][1];j++)
		{
			b[j]++;
		}
	}
	for(i=0;i<1001;i++)
	{
		if(b[i]>max)max=b[i];
	}
	printf("%d",max);
}
