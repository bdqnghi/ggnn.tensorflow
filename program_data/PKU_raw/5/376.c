
int main()
{
int  i,j,t,l,p,sum=0;

double b,n;

char z[500],s[500];

scanf("%lf",&n);

scanf("%s",z);

scanf("%s",s);

l=strlen(z);

p=strlen(s);

if(l!=p)
{
  

  printf("error");
}
else
{
   for(i=0;i<l;i++)
   {
      if(z[i]=='A'&&s[i]=='A') sum++;

	  else  if(z[i]=='T'&&s[i]=='T') sum++;

	  else  if(z[i]=='C'&&s[i]=='C') sum++;

	  else  if(z[i]=='G'&&s[i]=='G') sum++;

	  else if((z[i]!='A'&&z[i]!='T'&&z[i]!='C'&&z[i]!='G')||(s[i]!='A'&&s[i]!='T'&&s[i]!='C'&&s[i]!='G'))
	  {
		 t=0;
		 
		 break;
	  }
   }

   if(t==0) printf("error");

   else 
   {
	   b=(double)sum/l;

	   if(b>n)
	   printf("yes");

	   else printf("no");
   }
}
 
 
 
 

return 0;



}