
void main()
{
	char a[50],b[50];
	scanf("%s %s",a,b);
	int length_a=strlen(a),length_b=strlen(b);
	int i,j,k=1;
	char *p;
	p=b;
	for(i=0;i<=length_b-length_a;i++)
	{
		for(j=0;j<length_a;j++)
		{
			if(a[j]!=*(p+i+j))
			{
			k=0;
			break;
			}
		}
		if(k==1)
		{
			printf("%d\n",i);
			break;
		}
		else
			k=1;
	}
}