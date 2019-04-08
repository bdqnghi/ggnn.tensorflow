int main()
{
	char a[500],b[501][6]={0};
	int n,i,j,k,l,m,x,y,z;
	scanf("%d",&n);
	scanf("%s",a);
	k=strlen(a);
	l=1;
	for(i=0;i<n;i++) b[0][i]=a[i];
	b[0][4]=1;
	b[0][5]=0;
	for(i=1;i<=k-n;i++)
	{
		y=0;
		for(j=0;j<l;j++)
		{
			x=0;
			for(m=0;m<n;m++)
			{
				if(a[i+m]!=b[j][m]) x++;
			}
			if(x==0) {b[j][4]++;y++;}
		}
		if(y==0) 
		{
			for(m=0;m<n;m++) b[l][m]=a[i+m];
			b[l][4]=1;
			b[l][5]=l;
			l++;
		}
	}
	for(i=0;i<l-1;i++)
	{
		for(j=i+1;j<l;j++)
		{
			if(b[j][4]>b[i][4]) 
			{
				for(z=0;z<6;z++)
				{b[500][z]=b[j][z];b[j][z]=b[i][z];b[i][z]=b[500][z];}
			}
		}
	}
	if(b[0][4]==1) printf("NO");
	else
	{
	printf("%d",b[0][4]);
	z=1;
	for(i=1;i<l;i++)
	{
		if(b[i][4]==b[i-1][4]) z++;
		else break;
	}
	for(i=0;i<z-1;i++)
	{
		for(j=i+1;j<z;j++)
		{
			if(b[j][5]<b[i][5]) 
			{
				for(k=0;k<6;k++)
				{b[500][k]=b[j][k];b[j][k]=b[i][k];b[i][k]=b[500][k];}
			}
		}
	}
	for(i=0;i<z;i++) 
	{
		printf("\n");
		for(j=0;j<n;j++) printf("%c",b[i][j]); 
	}
	}
	return 0;
}