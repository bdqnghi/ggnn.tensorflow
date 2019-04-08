int main()
{
   char a[100]="\0",b[100]="\0",*p,*q;
   int change(char *w);
   scanf("%s%s",a,b);
   if(strlen(a)!=strlen(b)){printf("NO");return 0;}
   change(a);
   change(b);
   for(p=a,q=b;*p!='\0';p++,q++)
   {
	   if(*p!=*q){printf("NO");return 0;}
   
   }
   printf("YES");
	  
	  return 1;
}
int judge(int *w,int i,int *p)
{


return 0;
}
int change(char *w)
{
 char *pi=w,*qi,s;
 for(;*(pi+1)!='\0';pi++)
	 for(qi=pi+1;*qi!='\0';qi++)
	 {
		 if (*qi>*pi)
		 {
			 s=*qi;
			 *qi=*pi;
			 *pi=s;
		 }
	 }
return 0;
}