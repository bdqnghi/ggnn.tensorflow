void main()
{
	char str1[100],str2[100],str3[100],a[100][100];
	int i,j=0,t=0,l,m,n,k=-1,f=1;
	gets(str1);
	gets(str2);
	gets(str3);
	m=strlen(str1);
	l=strlen(str2);
	str1[m]='\0';
	for(j=0;i<=m;j++)
	{
		for(i=k+1,n=0;i<=m;i++,n++)
		{
			if(str1[i]!=' '&&str1[i]!='\0') a[j][n]=str1[i];
			else {a[j][n]='\0';k=i;break;}
		}
	}
	k=j-1;
	for(j=0;j<k;j++)
	{
		f=1;
		t=strlen(a[j]);
		if(l!=t) {printf("%s",a[j]);if(j<k-1){printf(" ");}continue;}
		else
		{
			for(i=0;i<l;i++)
			{
				if(a[j][i]!=str2[i]) {printf("%s",a[j]);if(j<k-1){printf(" ");}f=0;break;}
			}
		}
		if(f==1) {printf("%s",str3);if(j<k-1){printf(" ");}}
	}
}