
void main()
{
	char a[300]={""},b[52]={""},tempc;
	gets(a);
	int n,i,j=0,k=0,sign=0,c[52]={0},tempi;
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))
		{
			sign=0;
			for(j=0;j<k;j++)
				if(a[i]==b[j])
				{
					c[j]++;
					sign++;
					break;
				}
			if(sign==0)
			{
				k++;
				b[k-1]=a[i];
				c[k-1]++;
			}
		}
	}
	for(i=0;i<k;i++)
		for(j=0;j<k-i;j++)
		{
			if(b[j]>b[j+1])
			{
				tempc=b[j];
				b[j]=b[j+1];
				b[j+1]=tempc;
				tempi=c[j];
				c[j]=c[j+1];
				c[j+1]=tempi;
			}
		}
	if(k!=0)
	{
	for(i=1;i<=k;i++)
	{
		printf("%c=%d\n",b[i],c[i]);
	}
	}
	else
		printf("No");
}

