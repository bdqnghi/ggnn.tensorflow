
char minword[50]="\0";
char maxword[50]="\0";

void clear(int i)
{
	int j = 0;
	for ( j= 0; j < 50; j++) {
		if (i==0) {
			minword[j] = 0;
		} else {
			maxword[j] = 0;
		}
	}
}

int main()
{  char a[1001];
   char str[51];
   
   int max = 0, min = 100;
   int i,len=0,n;
   gets(a);
   n=strlen(a);
   a[n] = ' ';
   a[n+1] = '\0';
 
   for(i=0;i<n+1;i++)
   {     
	     str[len]=a[i];
		 len++;
         if(a[i]==' '){
			 str[len-1]='\0';
		     len=0;
			 //printf("%s\n", str);
		 }
		 
		 if(strlen(str)<min && !len)
		 {
			 min = strlen(str);
			 clear(0);
             strcpy(minword, str);
			 //printf("min=%d, %s\n",min, minword);
		 }
		 if(strlen(str)>max && !len)
		 {    
			 max = strlen(str);
			 clear(1);
			 strcpy(maxword,str);
			 //printf("max=%d, %s\n",max, maxword);
		 }
   }
    printf("%s\n%s",maxword,minword);

	return 0;
}
