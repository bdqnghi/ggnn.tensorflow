char a[500],b[500][5];
int i,j,k,l,c[500]={0},max,n;
int main()
{
	scanf("%d%s",&n,a);
	l=strlen(a);
	for(i=0;i<=l-n;i++)
		for(j=i,k=0;j<n+i;j++,k++)
			b[i][k]=a[j];
    for(i=0;i<=l-n;i++)
		for(j=i;j<=l-n;j++)
			if(strcmp(b[i],b[j])==0)
				c[i]+=1;
    for(max=c[0],i=1;i<=l-n;i++)
		max=(max>=c[i])?max:c[i];
	if(max==1)printf("NO\n");
	else
    {printf("%d\n",max);
	for(i=0;i<=l-n;i++)
		if(c[i]==max)printf("%s\n",b[i]);
	}
	return 0;
}