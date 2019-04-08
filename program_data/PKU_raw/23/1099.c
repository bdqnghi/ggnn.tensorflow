


int main()
{
	char a[100],b[100][100];
	int n=0,m=0,k,i;
	gets(a);
	scanf("\n");
	for(i=0;i<100;i++)
	{
		if(a[i]=='\0')break;
		if((a[i]!=' ')&&(a[i]!='\0'))
		{
			b[m][n]=a[i];
			n++;
			if(a[i+1]==' '||a[i+1]=='\0'){m++;n=0;}
		}
	}
	printf("%s",b[m-1]);
	for(i=m-2;i>=0;i--)printf(" %s",b[i]);

}

