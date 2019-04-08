int main()
{
	char a[30],b[30];
	int i,n,z,x=1;
    gets(a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		if((a[i]>47)&&(a[i]<58))b[i]=a[i];
		else b[i]='\n';
	}
	for(i=0;i<n;i++)
	{
		if(b[i]!='\n')
		{
			z=i;
			break;
		}
	}
	printf("%c",b[z]);
	for(i=z+1;i<n;i++)
	{
		if((b[i]!='\n')||(b[i-1]!='\n'))printf("%c",b[i]);
	}
}