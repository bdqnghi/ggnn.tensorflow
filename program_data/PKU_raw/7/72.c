int main()
{
	char a[300];
	char b[200],c[200],d[200]={0};
	int n1,n2,n3,i,j,k,result,p,w;
	scanf("%s%s%s", a,b,c);
	n1=strlen(a);
	n2=strlen(b);
	n3=strlen(c);
	p=0;
	k=10000;
	for(i=0;i<n1-n2+1;i++)
	{
		if(p==0)
		{
			for(j=0;j<n2;j++)
			{
				d[j]=a[i+j];
			}
			result=strcmp(d,b);
			if(result==0)
			{
				k=i;
				p=1;
				w=i+j;
			}
		}
	}
	if(k==10000)
		printf("%s",a);
	else 
	{
		for(i=0;i<k;i++)
			printf("%c", a[i]);
		printf("%s",c);
		for(i=w;i<n1;i++)
			printf("%c", a[i]);
	}
	return 0;
}