
int main()
{
	int i,j=0,n,flag=0,max,min,s,t,p;
	char a[2000]={'\0'};
	char b[200][24]={'\0'};
	scanf("%d\n",p);
	gets(a);
	n=strlen(a);
	for (i=0;;i++)
	{
		for (j=0;j+flag<=n;j++)
		{
			if (a[j+flag]==' ')
			{	flag=j+flag+1;
			    j=0;
                break;
			}
			else if (a[j+flag]==',')
			{  	flag=j+flag+2;
			    j=0;
                break;
			}
			else 
				b[i][j]=a[j+flag];
		}
		if (j+flag==n+1)
			break;
	}
	max=strlen(b[0]),s=0;
	min=strlen(b[0]),t=0;
	for (j=1;j<=i;j++)
	{
		if (strlen(b[j])>max)
		{
			max=strlen(b[j]);
			s=j;
		}
		if (strlen(b[j])<min)
		{
			min=strlen(b[j]);
			t=j;
		}
	}

	printf("%s\n%s\n",b[s],b[t]);

	return 0;
}