void main()
{
   int i,j;
   char a[40],b[40],*pa,*pb,t;
   scanf("%s%s",a,b);  
   pa=&a[0];
   pb=&b[0];
   for(i=0;i<strlen(a);i++)
	   for(j=i;j<strlen(a);j++)
		   if(*(pa+i)<*(pa+j))
		   {
		     t=*(pa+i);
			 *(pa+i)=*(pa+j);
			 *(pa+j)=t;
		   }
   for(i=0;i<strlen(b);i++)
	   for(j=i;j<strlen(b);j++)
		   if(*(pb+i)<*(pb+j))
		   {
		     t=*(pb+i);
			 *(pb+i)=*(pb+j);
			 *(pb+j)=t;
		   }
   if(strcmp(a,b)==0) printf("YES");
   else printf("NO");
 
}