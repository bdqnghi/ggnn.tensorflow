int main()
{
	char a[1000];
	char b[100];
	int i,flag,j;
	int c[100];
	gets(a);
	for(i=0;i<1000;i++)
	{	if(a[i]>96)
			a[i]=a[i]-32;
	if(a[i]==0)
		break;}
	flag=i;
	b[0]=a[0];
	j=0;
	for(i=0;i<=flag;i++)
		c[i]=1;
	for(i=1;i<=flag;i++)
	{if(b[j]==a[i])
	c[j]++;
	else
	{j++;
	b[j]=a[i];
	}
	}
	for(i=0;i<j;i++)
	printf("(%c,%d)",b[i],c[i]);
	return 0;
}