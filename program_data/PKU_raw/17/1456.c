int f1(char zichuan[],int changdu)
{
    int i,n;
	for(i=changdu-1;i>=0;i--)
	{
		if(zichuan[i]=='(')
		{
			n=i+1;
		   while(zichuan[n]!=')')
		   {
			   n=n+1;
		   }
		   if(n<changdu)
		   {
			   zichuan[i]=' ';
			   zichuan[n]=' ';
		   }
		}
	}
	return 0;
}

int main()
{
	int i=0,changdu;
	char s[100];
  while(gets(s))
  {
  changdu=strlen(s);
  printf("%s\n",s);
  f1(s,changdu);
  for(i=0;i<changdu;i++)
  {
     switch(s[i])
	 {
	 case '(':s[i]='$';break;
	 case ')':s[i]='?';break;
	 default :s[i]=' ';break;
	 }
  }
   for(i=0;i<changdu;i++)
   {
	   printf("%c",s[i]);
   }
   printf("\n");
  }
	return 0;

}
