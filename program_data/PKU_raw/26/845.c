int main()
{
  int i,j,a,b,c,n;
  a=0;
  char u[101],w[101];
  gets(u);
  n=strlen(u);
  w[0]=u[0];
  for(i=1;i<=n;i++)
  {if((u[i]!=' '||u[i-1]!=' ')&&(i<n))
    {
	  a=a+1;
    w[a]=u[i];
     }
   else if(i==n) {
	   a=a+1;
	   w[a]='\0';
   }
    }

  puts(w);
  return 0;
}