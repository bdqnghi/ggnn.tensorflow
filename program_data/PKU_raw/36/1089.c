
int count(char *p,int *pn,int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=65;j<91;j++)
		{
			if(*(p+i)==j) (*(pn+j-65))++;
		}
		for(j=97;j<123;j++)
		{
			if(*(p+i)==j) (*(pn+j-97+26))++;
		}

	}
	return 0;
}

int main()
{
	char z1[100],z2[100];
	scanf("%s %s",z1,z2);
	int a1[52]={0},a2[52]={0},n1=strlen(z1),n2=strlen(z2),i,flag=0;
	char *p1=z1,*p2=z2;
	int *pn1=a1,*pn2=a2;
	count(p1,pn1,n1);
	count(p2,pn2,n2);
	for(i=0;i<52;i++)
	{
		if(a1[i]!=a2[i]) flag=1;
	}
	if(flag==0) printf("YES");
	else printf("NO");
	return 0;
}