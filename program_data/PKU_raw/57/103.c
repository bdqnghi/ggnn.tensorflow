void main() 
{ 
	char a[30][30];
	int n,i,m;
	scanf("%d",&n);
	for(i=0;i<n+1;i=i+1)
	{
		gets(a[i]);
		m=strlen(a[i]);
		if(a[i][m-2]=='e'&&a[i][m-1]=='r')
			a[i][m-2]='\0';
		else if(a[i][m-2]=='l'&&a[i][m-1]=='y')
			a[i][m-2]='\0';
		else if(a[i][m-3]=='i'&&a[i][m-2]=='n'&&a[i][m-1]=='g')
            a[i][m-3]='\0';
		printf("%s\n",a[i]);
	}
}