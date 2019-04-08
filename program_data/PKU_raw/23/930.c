void main()
{
     char a[110];
	 int i,k,len,m=0,b[100];
     gets(a);
     len=strlen(a);
	 for(i=0;i<len-1;i++)
	 {
		 if(a[i]==' ')
		 {	 b[m]=i;
		     m++;
		 }
	 }
	 for(k=m-1;k>=0;k--)
	 { for(i=b[k]+1;a[i]!=' '&&a[i]!='\0';i++)
			 printf("%c",a[i]);
	 printf(" ");
	 }
	 i=0;
	 while(a[i]!=' '&&a[i]!='\0')
	 { printf("%c",a[i]);
	   i++;
	 }
}
