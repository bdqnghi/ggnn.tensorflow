struct books
{
	int num;
	char author[27];
}book[999];
void main()
{
    int f(struct books *p,int n,char z);
	int i,n,j,x[26],k,max;
	char z;
	scanf("%d",&n);
	for(i=0;i<n;i++)scanf("%d%s",&book[i].num,book[i].author);
	for(z='A',i=0;z<='Z';z++,i++)x[i]=f(book,n,z);
	for(i=1,max=x[0],k=0;i<26;i++)if(x[i]>max){max=x[i];k=i;}
    printf("%c\n%d\n",k+65,max);
	for(i=0;i<n;i++)for(j=0;book[i].author[j]!='\0';j++)
		if(book[i].author[j]==k+65){printf("%d\n",book[i].num);break;}
}
int f(struct books *p,int n,char z)
{
	int m=0,i,j;
	for(i=0;i<n;i++)for(j=0;(p+i)->author[j]!='\0';j++)
		if((p+i)->author[j]==z){m++;break;}
	return m;
}