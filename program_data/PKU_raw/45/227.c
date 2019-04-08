char a[50],b[50];
int f(int,int);
void main()
{
	int len1,len2,i;
    scanf("%s%s",a,b);
	len1=strlen(a);
	len2=strlen(b);
	for(i=0;i<=len2-len1;i++)
	{
		if(f(len1,i)==0)
		break;
	}
	printf("%d\n",i);
}
int f(int len1,int i)
{
	int j,c=0;
	for(j=0;j<=len1-1;j++)
		c=c+(b[i+j]-a[j])*(b[i+j]-a[j]);
	return(c);
}
