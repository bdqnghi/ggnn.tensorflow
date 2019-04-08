void adds(char *a, char *b);
void addc(char *a, char c);
int main()
{
	char s[256];
	char subs[256];
	char replace[256];
	char result[1000]="";
	gets(s);
	gets(subs);
	gets(replace);

	int len_s=strlen(s);
	int len_subs=strlen(subs);
	int len_replace=strlen(replace);
	int i,j=0;
          int finish=0;
	for (i=0; i<len_s; i++)
	{
       if (s[i]==subs[j]&&finish==0) 
		   if (j==len_subs-1) 
		   {
			   adds(result,replace);
			   j=0;	
                                  finish=1;

                   }   
           else j++;
	   else 
	   {
		   i-=j;
		   j=0;
		   addc(result,s[i]);
	   }
	}
	printf("%s\n",result);

	return 0;
}


void adds(char *a, char *b)   //????b???a???
{
	int len_a=strlen(a);
	int len_b=strlen(b);
	int i;
	for (i=len_a; i<=len_a+len_b-1; i++) *(a+i)=*(b+i-len_a);
	*(a+len_a+len_b)='\0';
}

void addc(char *a, char c)	  //???c???a???
{
	int len_a=strlen(a);
	*(a+len_a)=c; 
	*(a+len_a+1)='\0';
}
