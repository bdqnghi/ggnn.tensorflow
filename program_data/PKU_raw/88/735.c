void main()
{
     char *str;
	 int i=0;
     str=(char*)calloc(100,sizeof(char));
     gets(str);
     while(*(str+i)!='\0')
	 {	 
		 if((*(str+i)<=57&&*(str+i)>=48)&&(*(str+i+1)>57||*(str+i+1)<48))
			 printf("%c\n",*(str+i));
		 if((*(str+i)<=57&&*(str+i)>=48)&&(*(str+i+1)<=57&&*(str+i+1)>=48))
			 printf("%c",*(str+i));
		 i=i+1;
	 }
}
