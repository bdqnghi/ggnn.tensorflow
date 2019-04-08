void main()
{
	int n,i;
	char a[88][88],c[88][88]={{'a'}};
	int b[88];
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{gets(a[i]);
	b[i]=strlen(a[i]);
	if(a[i][b[i]-1]=='r')
		strncpy(c[i],a[i],b[i]-2);
	if(a[i][b[i]-1]=='g')
		strncpy(c[i],a[i],b[i]-3);
	if(a[i][b[i]-1]=='y')
		strncpy(c[i],a[i],b[i]-2);
	}
for(i=0;i<n;i++)
printf("%s\n",c[i]);

}


