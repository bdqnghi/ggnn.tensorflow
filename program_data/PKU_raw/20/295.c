void main()
{
char str[50][13],*p,substr[50][3],max;
int i=0,a[50],j,k,m;
while(scanf("%s %s",str[i],substr[i])!=EOF)
{
	a[i]=strlen(str[i]);
    i++;
}
for(j=0;j<i;j++)
{
	for(p=str[j],max=str[j][0];p<str[j]+a[j];p++)
	if(*p>max)
	max=*p;
	for(k=0;k<a[j];k++)
		if(max==str[j][k])
		{
			for(m=a[j]+2;m>k+3;m--)
				str[j][m]=str[j][m-3];
			str[j][k+1]=substr[j][0];
			str[j][k+2]=substr[j][1];
			str[j][k+3]=substr[j][2];
			str[j][a[j]+3]='\0';break;
		}
		printf("%s\n",str[j]);
}
}
	





	



