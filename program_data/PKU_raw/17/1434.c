void print(int n1,int z[500],char s[500]);
void search(int a[500],int h);
char s[500];
int z[500];
int main()
{
	while(scanf("%s",s)!=EOF)
	{
	int h,a,l1=0,l2=0;
	h=strlen(s);
	for(a=0;a<=h-1;a++)
	{	if(s[a]=='(')
		{	z[a]=1;
		}
	    else
		{
	          if(s[a]==')')
			  {   z[a]=2;		   
			  }
			  else

			  {
				  z[a]=0;
			  }
		}

    }
	search(z,h);
	print(h,z,s);
	}
    return 0;

}
void search(int z[500],int h)
{
	int k,m,n;
    for(m=1;m<=h-1;m++)
 	  for(k=0;(k+m)<=(h-1);k++)
		if((z[k]==1)&&(z[k+m]==2))
		{   z[k]=0;z[k+m]=0;
		}
}
void print(int n1,int z[500],char s[500])
{
	int a;
	for (a=0;a<n1;a++)
	{ 
		printf("%c",s[a]);
	}
		printf("\n");
	for (a=0;a<n1;a++)
	{
		if(z[a]==0)   
	 printf(" ");
	if(z[a]==1)   
	 printf("$");
	if(z[a]==2)   
	 printf("?");
	}
	printf("\n");
}
