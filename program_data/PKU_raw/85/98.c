int main()
{

	int i,n,j,c,a;
	scanf("%d",&n);		
	
	for(j=0;j<n;j++)
		{	c=0;
		a=0;
		char s[21];
	      scanf("%s",s);
	for(i=0;s[i]!='\0';i++)
		{		
		if(s[0]==95||(s[0]<=122&&s[0]>=97)||(s[0]<=90&&s[0]>=65))
				c++;
		       a++;
		 if(s[i]==95||(s[i]<=122&&s[i]>=97)||(s[i]<=90&&s[i]>=65)||(s[i]<=57&&s[i]>=48))
		 	c++;
		     a++;
		 
	}
		
	if(c==a)
	{printf("yes\n");}
    else
	{printf("no\n");}	
	}


	return 0;
}

