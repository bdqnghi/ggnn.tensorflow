int main()
{
  char str[101];
//strcpy(str,"avx hexavxavxyeh");
  int i,j,t,p=1;
 gets(str); 
  for(i=0;i<=50;i++)
  {
	  if(str[i]==' ') {
		  t=i;
	  break;}
  }
  for(i=t+1;i<strlen(str);i++)
 {
    for(j=0;j<t+1;j++)
	{ 
		if(j==t&&p==1)
	  {printf("%d\n",i-t-1);
		goto l;}
	 else if(str[i+j]==str[j]&&p==1)
			p=1;	  
	 else if(str[i]==str[0])
		  p=1;
	 else p=0;
	}
  }
l: return(0);
}
      
