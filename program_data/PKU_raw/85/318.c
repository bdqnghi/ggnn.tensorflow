void main()
{
    int n,i,k,j,flag;
    char key[37][20]={"int","char","float","double","short","long","unsigned","struct","union","enum","auto","extern","register","static","typedef","goto","return","sizeof","break","continue","if","else","do","while","for","switch","case","default","void","entry","include","define","undef","ifdef","ifndef","endif","line"};
    char a[100];
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
    	flag=0;
    	scanf("%s",a);
    	k=strlen(a);
    	
    	if (a[0]>122||(a[0]>90&&a[0]<97&&a[0]!=95)||a[0]<65) flag=1;
    	
    	
    	for (j=1;j<k;j++)
    	{
    		if (a[j]<48||a[j]>122||(a[j]>57&&a[j]<65)||(a[j]>90&&a[j]<97&&a[j]!=95)) flag=1;
    	}
    	
    	for (j=0;j<37;j++) 
    	{
    		if (!strcmp(key[j],a))  flag=1;
    	}
    	
    	if (flag==1)
    	{
    		printf("no\n");
    	} 
    	else printf("yes\n");
    }
}