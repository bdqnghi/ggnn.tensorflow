int main(int argc, char* argv[])
{
  char s[50],w[50];
  int i,j,a,b;
	  scanf("%s%s",s,w);
    a=strlen(s);
	b=strlen(w);
	for (i=0;i<b;i++)
	{
	   if(s[0]==w[i])
	   {
	     for(j=0;j<a;j++)
		 {
			 if(s[j]!=w[i+j])
			 break;
		 }
	   	 if(j==a)
		 {
	    printf("%d",i);
		break;
		 }
	   }
	}
	return 0;
}
