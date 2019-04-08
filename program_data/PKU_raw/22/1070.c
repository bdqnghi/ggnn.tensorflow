int main ()
{
	char s[1000];
	int a[1000]={0},i=0,k=0,t=0,temp,flag,j,p;
	gets(s);
	do
	{
		if(s[i]>='0'&&s[i]<='9')
		{
			flag=0;
			t=10*t+s[i]-'0';
		}
		else
			if(flag==0)
			{
				a[k++]=t;
				t=0;
			}
		i++;
	}while(s[i-1]!='\0');
	for(i=0;i<k-1;i++)
		for(j=i+1;j<k;j++)
			if(a[i]==a[j])
				a[j]=0;
	for(i=0;i<k;i++)
	{
		p=i;
		for(j=i;j<k;j++)
			if(a[p]<a[j])
			{
				temp=a[p];a[p]=a[j];a[j]=temp;
			}
	}
	if(a[1]==0)
		printf("No");
	else
		printf("%d",a[1]);
	return 0;
}