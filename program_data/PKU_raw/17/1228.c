
int main()
{
	int i,n,b,k,t,m,p;
	char a[1000]={0};
	scanf("%d",&n);
	for(p=0;p<n;p++)
	{
		scanf("%s",a);
		printf("%s\n",a);
		b=strlen(a);
	  for(m=0;m<b;m++)
	  {
		if(a[m]!='('&&a[m]!=')')
		{
			a[m]=' ';
		}
	  }
  	for(i=0;i<b;i++)
	{
		if(a[i]==')')
		{
			for(t=i;t>=0;t--)
			{
				if(a[t]=='(')
				{
					a[i]=' ';
					a[t]=' ';
					break;
				} 
			}
		}
	}
	for(k=0;k<b;k++)
	{
		if(a[k]=='(')
		{
			a[k]='$';
		}
		else if(a[k]==')')
		{
			a[k]='?';
		}
	}
	printf("%s\n",a);
	}
	return 0;
}