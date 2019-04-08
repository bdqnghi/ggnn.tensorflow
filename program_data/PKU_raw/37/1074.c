int main ()
{
	char a[100000];
	int b[100000];
	int n,i,j,k,c,d;
	scanf("%d",&n);
		
	for(i=1;i<=n;i++)
	{
         scanf("%s",a);
	
		for(j=0;a[j];j++)
		{
			
			c=0;
			for(k=0;a[k];k++)
			{
				if(a[k]==a[j])
			    c++;
			}
			b[j]=c;
		}
		d=-1;
		for(k=0;a[k];k++)
		{
			if(b[k]==1)
			{
				printf("%c\n",a[k]);
				d++;
				break;
			}
		}
		if(d!=0)
		{printf("no");}
	}
	return 0;
}