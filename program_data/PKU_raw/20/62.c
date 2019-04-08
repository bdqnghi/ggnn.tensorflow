void main()
{
	int i=0,j,k,c[10]={0};
	char a[10][100]={'\0'},b[10][3]={'\0'},m;
for(i=0;;i++)
	
	if(EOF==scanf("%s %s",a[i],b[i]))break;
	
	
	for(j=0;j<i;j++)
	{
		for(k=0,m=a[j][0];k<strlen(a[j])-1;k++)
		{
			if(m<a[j][k+1])
			{c[j]=k+1;
			m=a[j][k+1];
			}
		}
	}
     for(j=0;j<i;j++)
	 {
		 for(k=strlen(a[j])-1;k>c[j];k--)
		 a[j][k+3]=a[j][k];
		 a[j][c[j]+1]=b[j][0];
		  a[j][c[j]+2]=b[j][1];
		   a[j][c[j]+3]=b[j][2];
		   
	 }
	 for(j=0;j<i;j++)
		 printf("%s\n",a[j]);
}




