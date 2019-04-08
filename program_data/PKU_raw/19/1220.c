void swap(char *str,char *a,char *b)
{
	char *p1=str,*p2=a;
	int len1,len2,len3,n,i=0,j,k,m;
	len1=strlen(str);
	len2=strlen(a);
	len3=strlen(b);
	n=len3-len2;
	while(*p1!='\0')
	{
		if((*p1==*p2)&&(!isalpha(*(p1-1))))
			while((*p1==*p2)&&(*p2!='\0'))
			{p1++,p2++;i++;}
			else {p1++;i++;}
			if((*p2=='\0')&&isalpha(*p1)==0)
			{
				if(n<0)
				{
					j=i-len2;
					for(k=0;k<len3;k++)
						str[j++]=b[k];
					for(m=i;m<len1;m++)
						str[j++]=str[m];
					while(j<len1)
						str[j++]='\0';
					len1=strlen(str);
				}
				else
				{
				
					for(m=len1+n;m>i;m--)
						str[m]=str[len1--];	
					j=i-len2;
					for(k=0;k<len3;k++)
						str[j++]=b[k];
						len1=strlen(str);
				}
			}
			p2=a;
	}
}
void main()
{
   char str[1000],a[200],b[200];
   gets(str);
   gets(a);
   gets(b);
   swap(str,a,b);
   puts(str);
}



