int main()
{
	char c[1000];
	int i,j,l;
	gets(c);
	l=strlen(c);
	for(i=0;i<=(l-1);i++)
		if((c[i]==32)&&(c[i+1]==32))
		{   i--;
			for(j=i+1;j<=(l-1);j++)
				{
					c[j]=c[j+1];
				}	
		}
	puts(c);
   return 0;




}