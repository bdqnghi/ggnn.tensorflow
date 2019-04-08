
void read(char x[])            /* read is used to overturn x[] */
{
	char temp[100];
	int i,k;
	scanf("%s",temp);
	k=strlen(temp);
	x[k]=0;
	for(i=0;i<k;i++)
		x[i]=temp[k-1-i];
}

void main()
{
	char a[100],b[100];
	int i,j,la,lb,k,n;
	scanf("%d",&n);
	for(k=1;k<=n;k++)
	{
		read(a);
		read(b);
		la=strlen(a);
		lb=strlen(b);
		for(i=0;i<lb;i++)
		{
			if(a[i]<b[i])
			{
				a[i]=a[i]+10-b[i]+'0';
				a[i+1]--;
			}
			else
				a[i]=a[i]-b[i]+'0';
		}
		for(i=lb;i<la;i++)
		{
			if(a[i]<'0')
			{
				a[i]=a[i]+10;
				a[i+1]--;
			}
		}
		for(i=0,j=0;i<la;i++)
		{
			if(a[la-1-i]!='0' || j!=0)
			{
			printf("%c",a[la-1-i]);
			j=1;
			}
		}
		if(j==0) printf("0");
		printf("\n");
	}
}