void fanxu(char *p,int n);
void fanxu(char *p,int n)
{
	int i,j;
	char temp;
	if((*p=='-'&&*(p+1)=='0')||*p=='0') {*p='0';*(p+1)='\0';return;}
else if(*p=='-'&&*(p+1)!='0')
      {  for(i=n-1;i>=0;i--)
             if(*(p+i)!='0') {*(p+i+1)='\0';break;}
        j=i;
        for(i=1;i<=j/2;i++)
	       {temp=*(p+i); *(p+i)=*(p+j+1-i);*(p+j+1-i)=temp;}
	  
	  }  
else  {  for(i=n-1;i>=0;i--)
             if(*(p+i)!='0') {*(p+i+1)='\0';break;}
        j=i;
        for(i=0;i<=j/2;i++)
	       {temp=*(p+i); *(p+i)=*(p+j-i);*(p+j-i)=temp;}
	  
	  }  	  
}


int main()
{
	int i,len;
	char str[300];
	for(i=0;i<6;i++)
	{gets(str);len=strlen(str);
	fanxu(str,len);
	printf("%s\n",str);
	}
	return 0;
}