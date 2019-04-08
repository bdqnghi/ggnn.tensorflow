struct book{
	char a[1000];
    char b[26];
}book[1000];
int main()
{
 int m,i,j,s,k,p,l;
 int t[26]={0};
 char x;
 scanf("%d",&m);
 for(i=0;i<m;i++)
 scanf("%s %s",&book[i].a,book[i].b);
 for(i=0;i<m;i++)
 {
	 s=strlen(book[i].b);
	 for(j=0;j<s;j++)
	 {
		 x=book[i].b[j];
		 k=x;
		 t[k-65]=t[k-65]+1;
	 }
 }
 p=t[0];
 l=0;
 for (i=1;i<26;i++)
 {
	 if(t[i]>p)
	 {
		 p=t[i];
		 l=i;
	 }
 }
 x=l+65;
 printf("%c\n",x);
 printf("%d\n",p);
for(i=0;i<m;i++)
 {
	 s=strlen(book[i].b);
	 for(j=0;j<s;j++)
	 {
		 if(book[i].b[j]==x)
		 {
			 printf("%s\n",book[i].a);
		 }
	 }
}
return 0;
}
