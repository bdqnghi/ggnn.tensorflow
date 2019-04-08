int input(char s[],int a[])
{
	int len=strlen(s);
	int i,j=0;
	a[j]=s[0]-'0';
	for(i=1;i<len;i++)
		if(s[i]>='0'&&s[i]<='9')
		{
			if(s[i-1]>='0'&&s[i-1]<='9')
				a[j]=a[j]*10+s[i]-'0';
			else 
			{	
				j++;
				a[j]=s[i]-'0';
			}
		}		
	return(j+1);
}
void main()
{
	char a[5050],b[5050];
	int x[1010],y[1010],n,i,count[1010]={0};
	gets(a);
	gets(b);
	n=input(a,x);
	n=input(b,y);
	int p;
	for(p=0;p<1000;p++)
		for(i=0;i<n;i++)
			if(p>=x[i]&&p<y[i])
				count[p]++;
	int max=0;
	for(p=0;p<1000;p++)
		if(count[p]>max)max=count[p];
	printf("%d %d",n,max);
}
