int main()
{
	char a[200],b[100],n=')';
	int i,j,k,l,m=0;
	while(1)
	{
	    gets(a);
		if(feof(stdin))
			break;
		k=0;
		while(1)
		{
			n=')';m=0;
		for(i=0;i<200;i++)
		{
			if(a[i]=='\0')
				goto here;
			l=0;
			for(j=0;j<k;j++)
			{
				if(i==b[j])
				{
					l=1;
				    break;
				}
			}
			if(l)
				continue;
			else if(a[i]!='('&&a[i]!=')')
				continue;
			else if(n=='('&&a[i]==')')
			{
				b[k]=m;
				b[k+1]=i;
				k=k+2;
				break;
			}
			m=i;
			n=a[i];
		}
		}
here:
		printf("%s\n",a);
		for(i=0;i<200;i++)
		{
			if(a[i]=='\0')
			{
				printf("\n");
				break;
			}
			m=0;
			for(j=0;j<k;j++)
			{
				if(i==b[j])
				{
					m=1;
					break;
				}
			}
			if(m==1)
				printf(" ");
			else if(a[i]=='(')
				printf("$");
			else if(a[i]==')')
				printf("?");
			else
				printf(" ");
		}
	}
	return 0;
}