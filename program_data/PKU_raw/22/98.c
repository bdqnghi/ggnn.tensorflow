int cvt(char c[],int n)
{
	int i,sum=0;
	for(i=0;i<n;i++)sum=sum*10+c[i]-'0';
	return sum;
}
void main()
{
	char a[1500]="\0",c[4]="\0";
	int i=0,n,j,k=0,b[300]={0},m1=0,m2=0;
	gets(a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		for(j=0;a[i]!=','&&a[i]!='\0';i++,j++)c[j]=a[i];
		b[k++]=cvt(c,j);
	}
	for(i=0;i<k;i++)if(b[i]>m1)m1=b[i];
	for(i=0;i<k;i++)if(b[i]==m1)b[i]=0;
	for(i=0;i<k;i++)if(b[i]>m2)m2=b[i];
	if(m2==0)printf("No");
	else printf("%d",m2);
}
