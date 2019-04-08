int left(int x,char s[],int n);//???????x?????
int main()
{
	int l;
    char c[101]={0};
	gets(c);
	puts(c);
    l=left(0,c,0);
	printf("%s",c);
	while ((scanf("%s",c)!=EOF))
	{
	printf("\n");
	puts(c);
    l=left(0,c,0);
	printf("%s",c);
	}
	return 0;
}
int left(int x,char s[],int n)
{
	int a;
	if (s[n]!='\0')
	{
		if (s[n]=='(')
		{
			a=left(x+1,s,n+1);
			if (a>0)  
			{
			s[n]=' ';
			return(a-1);
			}
           else 
		   {
			   s[n]='$';
			   return 0;
		   }
		}
		else if (s[n]==')')
		{
			if (x>0) 
			{
				s[n]=' ';
				return(left(x-1,s,n+1)+1);
			}
			else
            {
				s[n]='?';
				return(left(0,s,n+1)+1);
			}
		}
		else 
		{
          s[n]=' ';
		  return left(x,s,n+1);
		}
	}
	else return 0;
}