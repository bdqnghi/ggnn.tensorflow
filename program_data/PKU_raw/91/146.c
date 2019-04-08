int main()
{
	char *p1,*p2,a[100];
	int len,i=0;
	gets(a);
	len=strlen(a);
	p1=a;
	p2=a+1;
	do{  
         printf("%c",*p1+*p2);
		 p1=p2;
		 if(p2==a+len-1){
			 p2=a;
		 }
		 else p2++;
		 i++;
	}while(i<len);
	return 0;
}
		