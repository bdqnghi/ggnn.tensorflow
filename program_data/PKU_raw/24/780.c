void main()
{
	char a[10000],*p,*q,*r;int i=0,j=0,n,k,min=50,max=0,word=1,x=0,y=50;
	gets(a);
n=strlen(a);
p=a;
do
{
	if(*p==' '||p==&a[n])
		word=0;
	else
		word=1;
if(word==1)
i++;
else
{
	if(i>max){max=i;q=p;}
	if(i<min){min=i;r=p;}
	i=0;
}
p++;
}while(p!=&a[n+1]);
for(p=q-max;p<q;p++)
printf("%c",*p);printf("\n");
for(p=r-min;p<r;p++)
printf("%c",*p);printf("\n");
}

