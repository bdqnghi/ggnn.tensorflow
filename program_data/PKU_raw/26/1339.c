
void main()
{
	int i,j,k=0,n,m,r,len,sum=0,min,max,a[100]={0};
	char s[101]={""},s1[101][101]={""},b,c,d,e;
	gets(s);
	for(i=0,j=0;i<strlen(s);i++)
		if((s[i]==' '&&s[i+1]!=' '&&s[i-1]==' ')||(s[i]==' '&&s[i-1]!=' '&&s[i+1]==' ')) 
		a[j++]=i;
	//	printf("%d",a[0]);
	if(a[0]!=0)
	{
	  for(k=0;k<a[0];k++)
		  s1[0][k]=s[k];
	for(i=1;i<j/2;i++)
	  for(r=0,k=a[2*i-1]+1;k<=a[2*i]-1;r++,k++)
		  s1[i][r]=s[k];
	   for(r=0,k=a[2*i-1]+1;k<strlen(s);r++,k++)
	  s1[i][r]=s[k];
   printf("%s",s1[0]);
	for(i=1;i<j/2+1;i++)
	printf(" %s",s1[i]);
	}
   else for(i=0;i<strlen(s);i++)printf("%c",s[i]);
}
