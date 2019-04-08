
int main(int argc, char* argv[])
{
	char a[100],b[100];
	int i,j,m,n;
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	scanf("%s%s",a,b);
	m=strlen(a);
	n=strlen(b);
	
	for(i=0;i<m;i++)
		for(j=m-1;j>i;j--)
		{
			if(a[j-1]>a[j])
			{
				char e;
				e=a[j-1];
				a[j-1]=a[j];
				a[j]=e;
			}
		}
	for(i=0;i<n;i++)
			for(j=n-1;j>i;j--)
			{
				if(b[j-1]>b[j])
				{
					char f;
					f=b[j-1];
					b[j-1]=b[j];
					b[j]=f;
				}
			}
			if(strcmp(a,b)==0)
				printf("YES\n");
			else
				printf("NO\n");
	return 0;
}
