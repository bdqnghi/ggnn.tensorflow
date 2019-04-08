int judge(char x[]);
void main()
{
	int n,p,i;
	char a[21];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",a);
   	p=judge(a);
   	if(p==0)
   	{
   		printf("no\n");
   	}
   	if(p==1)
   	{
   		printf("yes\n");
   	}
   }
}

int judge(char x[])
{
	int i,len,k;
	len=strlen(x);
	k=0;
	if((x[0]>='a'&&x[0]<='z')||(x[0]>='A'&&x[0]<='Z')||(x[0]=='_'))
	{
   	for(i=0;i<len;i++)
   	{
   		if((x[i]>='a'&&x[i]<='z')||(x[i]>='A'&&x[i]<='Z')||(x[i]>='0'&&x[i]<='9')||(x[i]=='_'))
   		{
	   		k=k+0;
	   	}
	   	else k++;
	   }
		if(k==0)return 1;
		if(k!=0)return 0;
	}
	else return 0;
}