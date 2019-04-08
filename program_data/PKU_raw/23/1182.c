void main()
{
	char a[100],b[10][10],c=' ';int i,j=0,l,h=0;
	gets(a);
	l=strlen(a);
	for(i=0;i<l;i++){if(a[i]!=' ')b[j][h++]=a[i];else {b[j][h]=0;j++;h=0;}}b[j][h]=0;
	printf("%s",b[j]);
	for(i=j-1;i>=0;i--)printf("%c%s",c,b[i]);
	printf("\n");

}