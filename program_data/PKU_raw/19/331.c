void main()
{
	char s[1000],a[1000],b[1000];
	char *p1,*p2,*p3,*q1,*q,*q2;
	int S,A,i,j;

	gets(s);
	gets(a);
	gets(b);
	S=strlen(s);
	A=strlen(a);
	
	q=p1=s;
	q2=p2=a;
	p3=b;

	for(i=0;i<S;i++,p1++)
		if(*p1==*p2&&(*(p1-1)==' '||p1==s))
		{q1=p1;
		 for(j=0;j<A;j++,p2++,p1++)
		   if(*p1!=*p2)
		   break;
		  else if(j==A-1&&(*(p1+1)==' '||*(p1+1)=='\0'))
		  { for(;q<q1;q++)
			  printf("%c",*q);
		  printf("%s",p3);
		  q=p1+1;
		  }
		  p2=q2;
		}
		else if(i==S-1)
		printf("%s",q);
		
	
}


