main()
{
int n,j,k,i;
int ln[300];

scanf("%d",&n);
int T;
for(i=0;i<n;i++)
{
scanf("%d",&ln[i]);
}
printf("%d",ln[0]);
for(i=1;i<n;i++)
{T=1;
	for(k=i-1;k>0;k--)
	{
		if((ln[i]==ln[k])&&(T==1)) {T=-1;break;}
	}
	if((k==0)&&(T!=-1)&&(ln[i]!=ln[0]))	printf(",%d",ln[i]);
}

return 0;
}