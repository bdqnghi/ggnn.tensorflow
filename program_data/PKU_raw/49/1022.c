int f(char a[])
{
     int i,j,n;
	 n=strlen(a);
	 char b[501];
	 j=0; 
	 for(i=n-1;i>=0;i--)
	   b[j++]=a[i];
	  b[j]='\0';
	  if(strcmp(a,b)==0) return 1;
	  else return 0; 

} 

int main()
{
    char a[501],b[501]; 
    gets(a);
	int n,i,j,k,s;
	n=strlen(a);

	for(i=2;i<=n;i++)
	   for(j=0;j+i-1<n;j++)
	     {
		 s=0; 
		 for(k=0;k<500;k++)
	     b[k]='\0';
		 for(k=j;k<j+i;k++)
		 {
		   b[s++]=a[k]; 
		  } 
         if(f(b)==1) printf("%s\n",b);
		}
		return 0; 

} 