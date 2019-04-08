void str(char a[10],char b[3])/*???????*/
{
	int i,l,c=a[0],k;
	l=strlen(a);
	for(i=1;i<l;i++)
 		if(c<a[i])
		{
			c=a[i];
			k=i;
		}
 	for(i=0;i<k+1;i++) printf("%c",a[i]);
	for(i=0;i<3;i++) printf("%c",b[i]);
	for(i=k+1;i<l;i++) printf("%c",a[i]);
	printf("\n");
}
void main()
{
	char a[10],b[3];
	while(scanf("%s%s",a,b)!=EOF)
		str(a,b);
}