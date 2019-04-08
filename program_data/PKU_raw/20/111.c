
int f(char str[])              /*?????str?ASCII??????*/
{
	int i,a,n;
	char nul='0';
	a=strlen(str);
	for(i=0;i<a-4;i++)
	{
		if(str[i]>nul){nul=str[i];n=i;}
	}
	return(n);
}
void main()
{
	int i=0,n,j,a[100],length[100];
	char str[100][50],str1[100][50];
	do
	{                                          /*????????*/
		gets(str[i]);
	    length[i]=strlen(str[i]);i++;
	}
	while(length[i-1]!=0);
	n=i-1;
	for(i=0;i<n;i++)
	{
		a[i]=f(str[i]);
		for(j=0;j<50;j++)
		{
			if(j<a[i]+1)str1[i][j]=str[i][j];
			else if(j>a[i]&&j<a[i]+4)str1[i][j]=str[i][length[i]+j-4-a[i]];
            else if(j>a[i]+3 && j<length[i]-1)str1[i][j]=str[i][j-3];
			else if(j>=length[i]-1)str1[i][j]='\0';
		}			    
	}
	for(i=0;i<n;i++)printf("%s\n",str1[i]);
}