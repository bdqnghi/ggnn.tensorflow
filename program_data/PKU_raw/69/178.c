void add(char* a,char* b,char* c)
{
	int i,j,k,max,min,n,temp;
	char*s,*pmax,*pmin;
	max=strlen(a);
	min=strlen(b);
	if(max<min)
	{
		temp=max;
		max=min;
		min=temp;
		pmax=b;
		pmin=a;
	}
	else
	{
		pmax=a;
		pmin=b;
	}
	   s=(char*)malloc(sizeof(char)*(max+1));
	  s[0]='0';
	   for(i=min-1,j=max-1,k=max;i>=0;i--,j--,k--)
	    s[k]=pmin[i]-'0'+pmax[j];
	   for(;j>=0;j--,k--)
	      s[k]=pmax[j];
       for(i=max;i>=0;i--)
        if(s[i]>'9')
        {
        	s[i]-=10;
        	s[i-1]++;
        }
        if(s[0]=='0')
        {
        	for(i=1;i<max+1;i++)
        	c[i-1]=s[i];
        	c[i-1]='\0';
        }
        else
        {
        	for(i=0;i<max+1;i++)
        	  c[i]=s[i];
        	  c[i]='\0';
        	  
        }
        free(s);
	
}

int main()
{
	char a[300],b[300],c[300];
	scanf("%s %s",a,b);
	if((a[0]=='0')&&(a[1]=='\0')&&(b[1]=='\0')&&(b[0]=='0')) printf("0");
	add(a,b,c);
	char*p,*p1;
	p=c;
	if((*p=='0')&&(*(p++)!='0')&&(strlen(c)>1)) p++;
	for(p1=p;p1<c+strlen(c);p1++)
	printf("%c",*p1);
	return 0;
}