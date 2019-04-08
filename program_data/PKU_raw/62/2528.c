int main()
{
   char a[100];
   gets(a);
   for(int i=0;a[i]!='\0';i++){
		   printf("%c",a[i]);
		   if(a[i]==' '){
	           for(int j=i+1;a[j]==' ';j++){
	                i++;	
			   }
		   }
   }
    return 0;
}


