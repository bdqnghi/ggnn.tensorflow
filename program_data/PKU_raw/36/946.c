void main()
{
    char a[100],b[100],t;
	scanf("%s  %s",a,b);
	int l1=strlen(a),l2=strlen(b),i=0,j=0;
	for(i=0;i<l1;i++)
	{
		for(j=0;j<l2;j++)
		{
		   if(a[i]==b[j])
		   {
			   t=b[j];
			   b[j]=b[i];
			   b[i]=t;
		   }
		}
	}
	if(strcmp(a,b)==0) printf("YES");
	else printf("NO");
}