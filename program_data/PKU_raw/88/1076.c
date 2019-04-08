int main()
{
	char a[300];
	int i,n,b[20]={0},k=0,num=0;
	gets(a);
	n=strlen(a);
	a[n]=' ';
	for(i=0;i<n+1;i++)
	{
		if(a[i]-'0'>=0&&a[i]-'0'<10)
			num=num*10+a[i]-'0';
		else if((a[i-1]-'0'>=0&&a[i-1]-'0'<10)&&(a[i]-'0'<0||a[i]-'0'>=10))
		{
			b[k]=num;
			num=0;
			k++;
		}
	}
	for(i=0;i<k;i++)
	{
		if(i==0)
			printf("%d",b[i]);
		else
			printf("\n%d",b[i]);
	}
	
	return 0;
}