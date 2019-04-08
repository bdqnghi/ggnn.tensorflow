int main()
{
	char a[100],b[100];
	int n,j=0,temp,yu,num=0;
           scanf("%s",a);
	n=strlen(a);
	for(int i=1;i<n;i++)
	{
		if(i==0)
			temp=a[0]-'0';
		if(i==1)
			temp=(a[0]-'0')*10+a[1]-'0';
        else
			temp=yu*10+a[i]-'0';
		b[j]=temp/13+'0';
		j++;
        yu=temp%13;
	}
	if(n==1)
	{
		printf("0\n");
		printf("%d",(a[0]-'0')%13);
	}
	else
	{
	for(int i=0;i<j;i++)
	{
		if(b[i]=='0'&&j>1)
			num++;
		else
			break;
	}
	for(int i=num;i<j;i++)
	{
		printf("%c",b[i]);
         } 
	printf("\n");
	printf("%d",yu);
	}

}










	
