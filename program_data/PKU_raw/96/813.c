int main ()
{
	int i,n,j,k,m;
	char a[103],c[103],d[2];
	scanf("%s",a);
	n=strlen(a);
	if(n==1)
		printf("0\n%c",a[0]);
	else if(n==2&&((a[0]-48)*10+a[1]-48<13))
	{
		printf("0\n");
		printf("%c%c",a[0],a[1]);
	}
	else if((n>3)||(n==2&&((a[0]-48)*10+a[1]-48>13)))
	{
		for(i=0;i<n-1;i++)
		{
			if (i==0)
			{
				m=a[i]-48;
				c[i]='0';
			}
			k=m*10+(a[i+1]-48);
			if (k>=13)
			{
				c[i+1]=k/13+48;
				m=k%13;
			}
			else
			{
				c[i+1]='0';
				m=k;
			}
		}
		if(m>9)
		{
			d[0]='1';
			d[1]=m-10+48;
		}
		else
		{
			d[0]=m+48;
			d[1]='\0';
		}
		for(i=0;i<n;i++)
		{
			if (c[i]!='0')
			{
				j=i;
				break;
			}
		}
		for(i=j;i<n;i++)
			printf("%c",c[i]);
		printf("\n");
		puts(d);
	}
	return 0;
}