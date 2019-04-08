

void main()
{
char *s,*a,*b,*q,*temp1,*temp2;
int i,j=0,len,lenb,k,flag=1,head=0,tail=0;
s=(char *)malloc(100*sizeof(char));
a=(char *)malloc(100*sizeof(char));
b=(char *)malloc(100*sizeof(char));
temp1=(char *)malloc(200*sizeof(char));
temp2=(char *)malloc(200*sizeof(char));
gets(s);
gets(a);
gets(b);

len=strlen(s);
lenb=strlen(b);
for(i=0;i<len;i++)
{
	if(*(s+i)!=' ')
	{	
		if(flag==1)
		{
			head=i;
			flag=0;
		}
		*(temp1+j)=*(s+i);
		j++;
	}
	else
	{
		q=s+i;
		tail=i;
		flag=1;
		*(temp1+j)='\0';
		j=0;
		if(!strcmp(temp1,a)) 
		{
			strcpy(temp2,q);
			for(k=0;k<lenb;k++)
				*(s+head+k)=*(b+k);
			*(s+head+k)='\0';
			strcat(s,temp2);
		}
		strcpy(temp1,"\0");
		strcpy(temp2,"\0");
	}
}
*(temp1+j)='\0';
if(!strcmp(temp1,a)) 
		{
		
			for(k=0;k<lenb;k++)
				*(s+head+k)=*(b+k);
			*(s+head+k)='\0';
			
		}
puts(s);
}
		
