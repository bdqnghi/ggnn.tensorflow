
int main()
{
	char s[3000],p[50][200]={0};
   int i,w=0,c=0,l;
   gets(s);
   l=strlen(s);
   for(i=0;i<l;i++)
   {
	   if(s[i]!=' ')
	   {p[w][c]=s[i];   c++;}
	   else{w++;   c=0;}
   }
         int m=strlen(p[0]),n=0,j=0,k=0;
	for(i=0;i<=w;i++)
	{ 
		if(strlen(p[i])<m)
	   {m=strlen(p[i]);  j=i;}
	   if(strlen(p[i])>n)
	   {n=strlen(p[i]);   k=i;}
   }
	printf("%s\n%s",p[k],p[j]);
	return 0;
}
