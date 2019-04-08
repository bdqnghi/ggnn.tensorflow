void arn(char a[],int n);
int max(int a,int b);
void main()
{
	char a[50]={0},b[50]={0};
	int i,l1,l2;
	scanf("%s %s",a,b);
	l1=strlen(a);l2=strlen(b);
	if(l1!=l2) printf("NO\n");
	else 
	{
		arn(a,l1);arn(b,l1);
		for(i=0;i<l1;i++)
			if(a[i]!=b[i])
			{
				printf("NO\n");break;
			}
	}
	if(i==l1) printf("YES\n");
}


	


void arn(char a[],int n)
{
	int j,k;
	char t;
	for(j=0;j<n-1;j++)
	{
		for(k=j+1;k<n;k++)
			if(a[j]<a[k])
			{
				t=a[j];a[j]=a[k];a[k]=t;
			}
	}
}