char investigate(char a[])
{
	int i,j,k,n;
	int p1=0,p2=0,w,t=0,t1=0;
	n=strlen(a);
	char b[100];
	for(i=0;i<n;i++)
	{
		if(a[i]=='(') p1++;
		if(a[i]==')') p2++;
	}
    
	for(i=0;i<n;i++)
	{
		if((i==(n-1))&&(t>t1))
		{
		  i=-1;t1=t;goto loop;
		}else
		if(a[i]!='('){b[i]==' ';continue;}
		else
		{
		  for(j=i+1;j<n;j++)
		  {
			  if(a[j]=='('){i=j-1;break;}
			  else if(a[j]==')')
			  {
				  a[i]='[';a[j]=']';t++;
				  break;
			  }
		  }
		}
		loop:;
		
	}

	for(i=0;i<n;i++)
	{
		if(a[i]=='(') b[i]='$';
		else if(a[i]==')') b[i]='?';
		else b[i]=' ';

	}
	for(i=0;i<n;i++)
	{
		if(a[i]=='[')a[i]='(';
		if(a[i]==']')a[i]=')';

	}
	
    for(i=0;i<n;i++)
		printf("%c",a[i]);
		printf("\n");
	for(i=0;i<n;i++)
		printf("%c",b[i]);

	return 0;
}

int main()
{
	int i,j;
	char a[100];
	while(gets(a))
	{
		investigate(a);
		printf("\n");

		
	}



}
