int main()
{
 char s[100],a;
	gets(s);
	int l=strlen(s),i;
 for(i=0;i<l;i++){
	 if(i!=l-1){
		 a=s[i]+s[i+1];
		 }
	 if(i==l-1){
		 a=s[0]+s[l-1];
	 }
	 printf("%c",a);
 }
return 0;
}
