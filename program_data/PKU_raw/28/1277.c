void main()
{
   char s[10000];
   int i,h,t=0,x=0,a[300],b[300],c[30];
   a[0]=0;
	   gets(s);
	   h=strlen(s);
   for(i=1;i<h;i++)
   {
	   if(s[i]==' '&&s[i-1]!=' ')
		   b[i-t-1]=i;
		   else t=t+1;
	   if(s[i-1]==' '&&s[i]!=' ')
		   a[i-x]=i;
	   else x=x+1;
   }
   b[h-t-1]=h;


for(i=0;i<h-x;i++)
c[i]=b[i]-a[i];
printf("%d",c[0]);
for(i=1;i<h-x;i++)
printf(",%d",c[i]);
}