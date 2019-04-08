int main()
{
	char a[MAX+2],b[MAX+1],c[MAX+1];
	gets(a); gets(b); gets(c);
	int len,len1,len2,i,j,flag=1;
	len=strlen(a);
	len1=strlen(b);
	len2=strlen(c);
	for(i=0;i<len;i++){
		if(i<=len-len1&&flag==1){
		   if(a[i]==b[0]&&a[i+1]==b[1]&&a[i+len1-1]==b[len1-1]){
		     for(j=0;j<len2;j++)
		         printf("%c",c[j]);
		     i=i+len1-1;
			 flag=0;	
		   }
		   else
		   printf("%c",a[i]);
		}
		else
		printf("%c",a[i]);
	}
}