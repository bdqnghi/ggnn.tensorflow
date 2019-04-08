void main()
{
	char a[100],b[100];
	int i,n1,n2,j,s;
    scanf("%s%s",a,b);
	n1=strlen(a);
	n2=strlen(b);
	if(n1==n2)
	{
		for(i=0;i<n1;i++)
		{for(j=0;j<n1;j++)
		if(a[i]==b[j]) {b[j]='\0';break;}
		}
		for(i=0;i<n1;i++)
			if(b[i]!='\0'){printf("NO");break;}
		if(i==n1) printf("YES");
	}
	else printf("NO");
}