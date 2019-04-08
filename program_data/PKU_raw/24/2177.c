void main()
{
	char a[200][30],c[500],temp[30];
	int i,j,k,p,m,l,d;
	gets(c);
	for(i=0;;i++)
	{	if(c[i]==' '||c[i]==','||c[i]=='\0')  
		{
			k=i;
			strncpy(a[0],c,k);
			a[0][k]='\0';
			break;
		}
	}
	if(c[i]=='\0')  {printf("%s\n",a[0]);printf("%s\n",a[0]);}
	else
	{	for(m=1,i=k;;i++)
	{	if(c[i]==' '||c[i]==',')
		{
			for(j=i+2;;j++)
			{
				if(c[j]==' '||c[j]==','||c[j]=='\0')
				{	for(p=0;p<j-i-1;p++)
					   a[m][p]=c[i+1+p];
				a[m][j-i-1]='\0';
				     m++;
					 break;
				}
			}
			if(c[j]=='\0') break;
		}
	}
	strcpy(temp,a[0]);
	for(i=1;i<m;i++)
	{
		l=strlen(temp);
		d=strlen(a[i]);
		if(d>l) strcpy(temp,a[i]);
	}
	printf("%s\n",temp);

    strcpy(temp,a[0]);
	for(i=1;i<m;i++)
	{
		l=strlen(temp);
		d=strlen(a[i]);
		if(d<l) strcpy(temp,a[i]);
	}
	printf("%s\n",temp);
	}

}