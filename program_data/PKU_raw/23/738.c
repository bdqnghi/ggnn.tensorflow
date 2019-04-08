void main()
{
	char str[101]={'\0'},c[100][100]={{'\0'}},b[100][100]={{'\0'}};
	int j,t,l,i,m=0;
    gets(str);
	l=strlen(str);
	str[l]=' ';
	str[l+1]=' ';
	for(i=0,j=0;;j++)
	{
		if(str[j] == '\0') break;
		if(str[j]==' ') 
		{
			t=j;
			strncpy(c[i],str,t);
			i++;
			for(j=t+1;;j++) {str[j-t-1]=str[j];if(str[j] == '\0') break;}
		    m++;
			j=0;
		}
	}
	for(i=0;i<m;i++) strcpy(b[i],c[m-i-1]);
    for(i=0;i<m-1;i++) printf("%s ",b[i]);
	printf("%s\n",b[m-1]);
}        


