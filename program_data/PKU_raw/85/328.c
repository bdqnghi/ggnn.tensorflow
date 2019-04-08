/* Note:Your choice is C IDE */
void main()
{
    int n,i=1,j=0,len,M=0;
    char A[21];
    scanf("%d",&n);
    scanf("\n");
  while(i<=n)
  {
  	gets(A);
  	len=strlen(A);
  	if((A[j]>='A'&&A[j]<='Z')||(A[j]>='a'&&A[j]<='z')||A[j]=='_')
  	 {
  	 	M++;
  	    for(j=1;j<=len-1;j++)
  	      {
  		     if((A[j]>='A'&&A[j]<='Z')||(A[j]>='a'&&A[j]<='z')||(A[j]>='0'&&A[j]<='9')||A[j]=='_') M++;
  	      }
  	      if(M==len) printf("yes\n");
  	      else printf("no\n");
  	 }
  	 else printf("no\n");
  	 i++;
  	 M=0;
  	 j=0;
  }
}