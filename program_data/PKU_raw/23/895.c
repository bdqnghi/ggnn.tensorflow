void main()
{
 int i,l,len;
 char a[526],*fr,*ta,*p;
 gets(a);
 len=strlen(a);
 for(i=len;i>=0;i--)
	 *(a+i+1)=*(a+i);
 *(a+len+1)=*a=' ';
 ta=a+len+1;
 for(p=a+len;p>=a;p--)
 {
	 if(*p==' ')
	 {
	     for(fr=p+1;fr<ta;fr++)
			 printf("%c",*fr);
		 if(p!=a) printf(" ");
		 ta=p;
	 }
 }

 
}