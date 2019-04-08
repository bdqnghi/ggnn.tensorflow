

int main(int argc, char* argv[])
{
	char a[200],b[100],c[100],d[200];
	int i,j;
	int n1=0,n2=0,n3=0;
	int m=0,flat=0,x=0;
	gets(a);
	gets(b);
	gets(c);
	for (i=0;a[i]!='\0';i++)
	
		n1++;
	for (i=0;b[i]!='\0';i++)
		n2++;
	for (i=0;c[i]!='\0';i++)
		n3++;	
	for (i=0;i<=n1+x*(n3-n2)-1;i++)
	{
		if (a[i]==b[0])
		{
			flat=1;
			for (j=1;j<=n2-1;j++)
			{
				if (a[i+j]!=b[j])
					break;
				else flat=flat+1;
			}
			if(((flat==n2)&&(a[i-1]==' ')&&(a[i+n2]==' '))||((i==0)&&(flat==n2)&&(a[i+n2]==' '))||((flat==n2)&&(i>=n1+x*(n3-n2)-n2-1)&&(a[i-1]==' ')))
			{
				for (m=i+n2;m<=n1+2;m++)
				{
					d[m-i-n2]=a[m];
				}
				for (m=i;m<=i+n3-1;m++)
				{
					a[m]=c[m-i];
				}
				for (m=i+n3;m<=n1+n3-n2+2;m++)
				{
					a[m]=d[m-i-n3];
				}
				i=i+n3-n2;
				x=x+1;
			}
		}
	}
	a[n1+x*(n3-n2)]='\0';
	printf("%s\n",a);
	return 0;
}
