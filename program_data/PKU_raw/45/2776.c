main()
{
	char a[100];int i=0;int j=0;
	char b[100];
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	scanf("%s",a);
	scanf("%s",b);

	int l1=strlen(b);int l2=strlen(a);
	for(i=0;i<l1;i++)
	{
		if(a[0]==b[i])
		{   
			j=0;
			while(j<l2)
			{
				if(a[0+j]!=b[i+j])
				break;
			    else
				j++;}
			
         if(j==l2)
		 {printf("%d",i);
		 break;}}}
}
