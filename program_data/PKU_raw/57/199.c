

char *fun(char str[])
{ int k;
  k=strlen(str);
  if(str[k-1]=='r'&&str[k-2]=='e')
  {
	  strncpy(str,str,k-2);
      str[k-2]='\0';
  }
  if(str[k-1]=='y'&&str[k-2]=='l')
  {
	  strncpy(str,str,k-2);
	  str[k-2]='\0';
  }
  if(str[k-1]=='g'&&str[k-2]=='n'&&str[k-3]=='i')
  {
	  strncpy(str,str,k-3);
	  str[k-3]='\0';
  }
  return str;
}
void main()
{
	int n,i;
	char str[50][50];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s",str[i]);
	for(i=0;i<n;i++)

		printf("%s\n",fun(str[i]));
}
	
