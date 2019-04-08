struct string
{
	char cha;
	int num;
};
int main()
{
	char str[310];
	struct string s[52],temp;
	int i,n,j,l,k=0;
	
    scanf("%s",str);
	
	
	l=strlen(str);
	for(i=0;i<l;i++)
	{
		n=1;
		if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z') 
		{
			
			for(j=i+1;j<l;j++)          
			{
				if(str[j]==str[i])
				{
					n++;
					str[j]='.';
				}
				else continue;
			}
			
			s[k].cha=str[i];
			s[k].num=n;
			k++;
		}
		
	}

	for(i=0;i<k-1;i++)
	{
		n=i;
		for(j=i+1;j<k;j++)
			if(s[j].cha<s[n].cha)
				n=j;
		temp=s[i];
		s[i]=s[n];
		s[n]=temp;
	}
	for(i=0;i<k;i++)
		printf("%c=%d\n",s[i].cha,s[i].num);
		
	if(k==0)
	{
		printf("No\n");
		return 0;
	}
	
	return 0;
}