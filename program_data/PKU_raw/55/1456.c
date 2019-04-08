int main()
{int a,b,i,j;
int ai[128]={0};
char ia[]="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char s[100],s2[100]="0",c;
long n=0;

   
 for(i='0';i<='9';i++)
		ai[i]=i-'0';
  for(i='A';i<='Z';i++)
		ai[i]=i-'A'+10;
   for(i='a';i<='z';i++)
		ai[i]=i-'a'+10;

   scanf("%d%s%d",&a,s,&b);
  for(i=0;s[i]!='\0';i++)
	  n=a*n+ai[s[i]];
 
  for(i=0;n!=0;i++)
     { s2[i]=ia[n%b];
       n=n/b;
      }  

  for(j=0;j<(i+1)/2;j++)
    {c=s2[j];s2[j]=s2[i-1-j];s2[i-1-j]=c;}
  
   puts(s2);
   return 0;
}