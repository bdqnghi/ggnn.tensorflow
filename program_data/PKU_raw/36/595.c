void main()
{
	char a[50],b[50],c;
	int i,j=0,l1,l2;
	scanf("%s%s",a,b);
	l1=strlen(a);l2=strlen(b);
	if(l1!=l2)printf("NO");
	else if(l1==l2)
	{
	for(j=0;j<l1;j++)
		for(i=j;i<l2;i++)
	{   
		if(a[j]==b[i])
		{c=b[i];
		b[i]=b[j];
		b[j]=c;  
		}
		
	
		
	}
	if(strcmp(a,b)==0)
		printf("YES");
	else printf("NO");
	}
}