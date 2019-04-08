
void pd(char *p,int m)
{
	char *head,*end,*t,*q;
	head=p;
	int zhi=0,j;
	end=p+m-1;
   for(t=head,q=end;t<=end;t++,q--)
	{if(*t==*q)zhi=1;
     else{zhi=0;break;}}
	if(zhi==1)
	{for(t=head;t<=end;t++)
		printf("%c",*t);
	printf("\n");}
}
void main()
{
	char a[1000]={0};
    char *p;
	int n,i;
	gets(a);
	for(p=a,n=0;*p!='\0';p++,n++);
   for(i=2;i<=n;i++)
			for(p=a;p<a+n-i+1;p++)
			pd(p,i);
}
 
