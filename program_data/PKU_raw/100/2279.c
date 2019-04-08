int main()
{
	char str[301];char s1[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	 int s2[52];
    int i,x,flag=0;
	for(i=0;i<52;i++)
		s2[i]=0;
	gets(str);
  for(i=0;i<strlen(str);i++)
  {
	  for(x=0;x<52;x++)
	  {if(s1[x]==str[i])
	  {s2[x]++;break;}
	  }
  }
  for(i=0;i<52;i++)
  {
	  if(s2[i]!=0)
	  {printf("%c=%d\n",s1[i],s2[i]);flag=1;}
  }
  if(flag==0)
	  printf("No");
	  return 0;
}