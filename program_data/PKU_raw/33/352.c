void main ()
{  int n,i,j,k,a;
char s[500];
  scanf("%d\n",&n);

   for(i=0;i<n;i++)
   { gets(s);
    a=strlen(s);
	for(j=0;j<a;j++)
	{if(s[j]=='A')
	printf("T");
if(s[j]=='T')
	printf("A");
if(s[j]=='C')
	printf("G");
if(s[j]=='G')
	printf("C");
	}
printf("\n");	
   }

}