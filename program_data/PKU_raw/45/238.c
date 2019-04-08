void main()
{
	char a[50],b[50];
	int na,nb,i=0,j,c;
	scanf("%s %s",a,b);
	na=strlen(a);
	nb=strlen(b);

	for(i=0;i<=nb-na;i++)
		if(a[0]==b[i])
		{	c=0;
			for(j=0;j<na;j++)
				if(a[j]==b[j+i])
				   c++;
			if(c==na)
				printf("%d",i);break;
		}

}
