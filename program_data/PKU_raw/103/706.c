int main()
{char s[1000];
int i,j,p,q;
scanf("%s",s);
for(i=0;;i++)
{if(s[i]=='\0')
break;

 else if(s[i]>='a')
	s[i]=s[i]-32;}
for(q=0;q<i;)
{j=q;p=1;
for(;;j++)
{if(s[j+1]==s[j])
{p=p+1;
continue;}
else
	break;}
q=q+p;
printf("(%c,%d)",s[j],p);}}
		
	
