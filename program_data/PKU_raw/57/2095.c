int main(int argc, char* argv[])
{
	int n,i;
	char s[100];
	int m;
	int j;
	scanf ("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf ("%s",s);
		
		m=strlen (s);
	    if (s[m-1]=='r'&&s[m-2]=='e')
		{
			for (j=0;j<m-2;j++)
				printf("%c",s[j]);printf ("\n");
		}
		else if (s[m-1]=='y'&&s[m-2]=='l')
		{
			for (j=0;j<m-2;j++)
				printf("%c",s[j]);printf ("\n");
		}
		else if (s[m-1]=='g'&&s[m-2]=='n'&&s[m-3]=='i')
		{
			for (j=0;j<m-3;j++)
				printf("%c",s[j]);printf ("\n");
		}
	   else 
		   printf ("%s\n",s);
	   }
	return 0;
}