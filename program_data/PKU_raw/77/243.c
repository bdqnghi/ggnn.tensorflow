int main()
{
	char a[1000];
	char m,f;
	int i,j,temp;
	gets(a);
	m=a[0];
	for(i=0;;i++)
		if(a[i]!=m) {f=a[i];break;}
	do
	{
		for(i=0;i<strlen(a)-1;i++)
		{
			if(a[i]=='0') continue;
			temp=0;
			for(j=i+1;j<strlen(a);j++)
			{
				
				if(a[i]==m&&a[j]==m) break;
				if(a[i]==m&&a[j]==f)
				{
					printf("%d %d\n",i,j);
					a[i]='0';
					a[j]='0';
					temp=1;
					break;
				}
			}
			if(temp==1) break;
		}
	}
	while(a[strlen(a)-1]!='0');
	return 0;
}