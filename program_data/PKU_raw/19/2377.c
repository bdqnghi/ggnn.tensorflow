void main(){
    char sour[100], result[100];
    char a[20], b[20],c[20];     
    char *p = NULL, *q = NULL;
    int i, k = 0;
	int l_1,l_2,l_3,l_4,l_5,x=0;
    int flag;
	int j;
    int word_length=0;
	int flag_2=0;
    gets(sour);
    gets(a);
    gets(b);
	l_1=strlen(sour);
	l_2=strlen(a);
	l_3=strlen(b);
    p = sour;
    q = sour;
	for(j=0;j<l_1-l_2+1;)
	{
		for(i=0;i<l_2;i++,j++)
		{
			c[i]=sour[j];
		}
		j=x;
		x++;
		if(strcmp(c,a)==0)
			flag_2++;
	}


    while(*p != '\0')
	{
		if ( *p==' ' || *(p+1)=='\0')
		{
          flag = 1;
          if ( *p== ' ') word_length = p - q;
          else word_length = p - q + 1;
          if ( word_length == strlen(a) ) {
             for ( i=0; i<strlen(a); i++) {
                if ( q[i]!= a[i] ){
                   flag = 0;
                   break;
                }
             }
          }
          else flag = 0;

          if ( flag == 1 ) 
		  {
             for (i=0; i < strlen(b); i++)
             {
                result[k++] = b[i];
             } 

          }
          else {
             while ( q != p) {
                result[k++] = *q++;               
             }
	
          }
          if ( *p==' ') result[k++] = ' ';
          else result[k++] = *p;

          q = p + 1;
       }
       p++;   
    }

	result[k] = '\0';
	l_4=strlen(result);
	l_5=l_1-l_2+l_3;
	if((l_4!=l_5))
	{
		if(flag_2==1)
			result[k-1]='\0';
	}
    puts(result);
}
