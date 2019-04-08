int f(char a[]);
void main()
{
	char a[50],b[50];
	int num1[52]={0},num2[52]={0},len1,len2,l,m,i;
    scanf("%s%s",a,b);
	len1=strlen(a);
	len2=strlen(b);
	for(i=0;i<=len1-1;i++)
	{
		if(a[i]>='a'&&a[i]<='z')
			l=a[i]-97;
		else if(a[i]>='A'&&a[i]<='Z')
			l=a[i]-39;
		num1[l]++;
	}

	for(i=0;i<=len2-1;i++)
	{
		if(b[i]>='a'&&b[i]<='z')
			m=b[i]-97;
		else if(b[i]>='A'&&b[i]<='Z')
			m=b[i]-39;
		num2[m]++;
	}
	i=0;
	while(num1[i]==num2[i]&&i<=51)
		i++;
	if(i==52)
		printf("YES");
	else
		printf("NO");
}
	
		

				


	
			
	
		
		
	
	

	


	



