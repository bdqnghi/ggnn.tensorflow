struct number
{
	char a[100];
	int lena;
	char b[100];
	int lenb;
}num[1000];

void main()
{
	int n,i,j,ll;

	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		   scanf("%s",num[i].a);
	       num[i].lena=strlen(num[i].a);
		   scanf("%s",num[i].b);
	       num[i].lenb=strlen(num[i].b);
	}
	for(i=0;i<n;i++)
	{
		ll=num[i].lena-num[i].lenb;
		for(j=num[i].lenb-1;j>=0;j--)
		{	
			if(num[i].a[j+ll]-num[i].b[j]>=0)
				num[i].a[j+ll]=num[i].a[j+ll]-num[i].b[j]+48;
			else
			{
				num[i].a[j+ll]=num[i].a[j+ll]-num[i].b[j]+48+10;
				num[i].a[j+ll-1]--;
			}
		}
		printf("%s\n",num[i].a);
	}

}