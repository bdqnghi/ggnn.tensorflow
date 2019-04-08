int main()
{
     char str[11],substr[4],string[14],*p;
	 int i,index;
     while(scanf("%s%s",str,substr)!=EOF)
	 {
		 p=str;
		 for(i=1;str[i];i++)
		 
			 if(str[i]>*p)
			 {
				 index=i;
				 p=&str[i];
			 }
		     string[0]='\0';
			 strncat(string,str,index+1);
			 strcat(string,substr);
			 strcat(string,p+1);
			 printf("%s\n",string);
	 }
return 0;
}
			 
			




