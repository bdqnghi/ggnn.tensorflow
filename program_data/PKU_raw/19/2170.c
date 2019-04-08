int main(){
   char s[101],a[101],b[101];
   int n,m;
   int i,j,k=0;
   gets(s);
   scanf("%s%s",a,b);
   n=strlen(s);
   m=strlen(a);
   for(i=0;i<n;i++)
   {
	   if((i==0&&s[i]==a[0]&&s[i+m-1]==a[m-1]&&s[i+m]==' ')||(i!=0&&s[i-1]==' '&&s[i]==a[0]&&s[i+m-1]==a[m-1]&&s[i+m]==' ')||(i+m==n&&s[i-1]==' '&&s[i]==a[0]&&s[i+m-1]==a[m-1])){
		   for(j=i;j<i+m;j++)
		   {
			   if(s[j]==a[j-i])  
			   {
				   k++;
			   }
		   }
		   
		   if(k==m)
		   {
			 	   printf("%s",b);
				   i+=m-1;
		   }else
		   {
			   printf("%c",s[i]);
		   }
		   k=0;
		}else
	  {
			printf("%c",s[i]);
	}
   }
   printf("\n");


  
   return 0;
}




