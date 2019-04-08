
int main()
{
	int m,n,t,e,i,j,k,l,p,max=0,c[501]={0};
	char a[501],b[251][5]={0};
	scanf("%d",&n);
	scanf("%s",a);
	m=strlen(a);
	for(j=0;j<m-n+1;j++)
	{
		for(i=0;i<n;i++)
		{
			b[j][i]=a[j+i];
		}
	}
	for(k=0;k<m-n+1;k++)
	{
		for(l=k;l<m-n+1;l++)
		{
			if(strcmp(b[k],b[l])==0) c[k]=c[k]+1;
		}
		if(c[k]>max) max=c[k];
	}
	if(max==1) printf("NO");
	else
	{
		printf("%d\n",max);
		for(p=0;p<m-n+1;p++)
		{
			if(c[p]==max)
			{
				printf("%s\n",b[p]);
			}
		}
	}
	return 0;
}