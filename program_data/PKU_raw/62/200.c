int main()
{
	int n,i,j=0,k,B;
	char a[200],b[200];
	gets(a);
	int A=B=strlen(a);
	for(i=A-1;i>=0;i--)	
	{
		if(a[i]==' ')	B--;
		else break;
	}
	for(i=0;i<B;i++)
	{
		if(a[i]!=' ')
		{
			b[j]=a[i];
			j++;
		}
		else
		{
			b[j]=' ';
			j++;
			for(k=i;k<B-1;k++)	if(a[k+1]!=' ')	break;
			i=k;
		}
	}
	for(i=0;i<j;i++) printf("%c",b[i]);
}