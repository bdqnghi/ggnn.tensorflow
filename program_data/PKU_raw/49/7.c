void main()
{
int l,n,i,j,k;
char c[1000];
gets(c);
l=strlen(c);
	 for(i=1;i<=l-1;i++)
	  for(j=0;j<l-1;j++)
	  for(n=0;n<=i/2;n++)
	{
	  if(c[j+n]!=c[j+i-n])break;
	  else if(c[j+n]==c[j+i-n] && n<i/2)continue;
	  else
	  {for(k=j;k<j+i;k++)printf("%c",c[k]);printf("%c\n",c[j+i]);}
	}
}