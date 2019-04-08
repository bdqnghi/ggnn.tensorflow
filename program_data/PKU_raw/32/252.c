void main()
{
	int n,i,j,longa[100],longb[100],t[100];
	char a[100][101],b[100][101],c[100][101];
	scanf("%d",&n);getchar();
	for(i=0;i<n;i++)
	{
		gets(a[i]);
		gets(b[i]);
		getchar();
		longa[i]=strlen(a[i])-1;
		longb[i]=strlen(b[i])-1;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<=longa[i];j++)
		{
			if(j<=longb[i]) 
			{
				c[i][longa[i]-j]=a[i][longa[i]-j]-b[i][longb[i]-j]+48;
				if(c[i][longa[i]-j]<48)
				{
					c[i][longa[i]-j]=c[i][longa[i]-j]+10;
					a[i][longa[i]-j-1]--;
				}
			}
			else c[i][longa[i]-j]=a[i][longa[i]-j];
		}
		for(j=0,t[i]=0;j<=longa[i];j++)
		{
			if(c[i][j]==48) t[i]++; 
			else break;
		}
		for(j=t[i];j<longa[i];j++)
			printf("%c",c[i][j]);
		printf("%c\n",c[i][longa[i]]);
	}
}
