
int pd(char *p,char *sub,int n)
{
	int j;
	char *x,*y;
	int zhi=0;
	for(j=0,x=p,y=sub;j<n;j++,x++,y++)
		if(*x==*y)zhi=1;
		else {zhi=0;break;}

	return(zhi);

}
void main()
{
	char *a,*sub,*rep,*t;
    char *p;
	int i,n,m;
	a=(char *)malloc(250*sizeof(char));
	sub=(char *)malloc(1000);
	rep=(char *)malloc(1000);
	t=(char *)malloc(1000);
	gets(a);
	gets(sub);
	gets(rep);
    for(n=0,p=sub;*p!='\0';p++,n++);/*????*/
    for(m=0,p=a;*p!='\0';p++,m++);/*????*/
	
	for(p=a;p<a+m-n;p++)
	  if(pd(p,sub,n)==1)break;
    strcpy(t,p+n);
	  if(pd(p,sub,n)==1)strcpy(p,rep);
 strcpy(p+n,t);
	puts(a);

}