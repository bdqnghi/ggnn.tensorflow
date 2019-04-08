int main()
{char c[100]={' '};
 int i,j,k,l,n,m;
 gets(c);
 l=strlen(c)-1;
 for (i=0;i<l;i++)
	 printf("%c",c[i]+c[i+1]);
 printf("%c",c[l]+c[0]);
 return 7;
}