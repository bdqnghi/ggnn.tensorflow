void main()
{
	char s[5000];
	int n=0,i,m=0,flag=0,k=0,flag2=0;
	gets(s);
	for(i=0;;i++)
	{
		if(s[i]!='\0')
			n++;
		else break;
	}//??
	for(i=0;i<=n;i++)
	{
              if(s[i]!=' '&&s[i]!='\0')
              {
                   m++;
                   flag2=1;
                   continue;
              }
              if(flag&&flag2)
              {
                  printf(",%d",m);
              }
              else if(flag2)
              {
                  printf("%d",m);
                  flag=1;
              }
              m=0;flag2=0;
	}
}