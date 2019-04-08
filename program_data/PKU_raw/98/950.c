int main()
{char s[43];
int m,n,sum=0,i,k;
char *p=s;
scanf("%d\n",&n);
scanf("%s",s);
printf("%s",s);
sum=strlen(s);
for(i=2;i<=n;i++)
   {scanf("%s",s);
   m=strlen(s);
   sum=sum+m+1;
   if(sum<=80)
      {printf(" %s",s);
			}
	else
	{printf("\n%s",s);
	sum=strlen(s);}
	for(k=0;k<=41;k++)
	{*p='\0';
	p=p+1;}
	p=s;
   }
  return 0;
}