
int main(int argc, char* argv[])
{
	int n,i,j,k,m;
	int len;
	char c[101]={'0'};
	scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++)
	{
      scanf("%s",c);
	  printf("%s\n",c);
	  len=strlen(c);
      for(j=len-1;j>=0;j--)
	  {
		  if(c[j]!='(' && c[j]!=')')
			  c[j]=' ';
		  if(c[j]=='(' && j==len-1)
			  c[j]='$';
		  if(c[j]=='(')
		  {
			  k=j;
			  for(m=k;m<len;m++)
			  {
                  if(c[m]==')')
				  {
					  c[m]=' ';
					  c[j]=' ';
					  break;
				  }
			  }
			  if(m==len-1 && c[len-1] !=' ')
			  {
				  c[j]='$';
			  }
		  }
	  }
	  for(j=0;j<len;j++)
	  {
		  if(c[j]==')')
			  c[j]='?';
		  if(c[j]=='(')
			  c[j]='$';
	  }
	  printf("%s\n",c);
	}
	return 0;
}
