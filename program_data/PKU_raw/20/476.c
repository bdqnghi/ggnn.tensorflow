/* Note:Your choice is C IDE */
void main()
{
	 char str[11],substr[4],A[15];
     int i,M,N,n,h;
	 while (scanf("%s%s",str,substr)!=EOF)
	 { 
     n=strlen(str);
	 i=1;
     N=str[0];
	 while(i<=n-1)
	 {
		 if(str[i]>N) {N=str[i];M=i;}
		 else {N=N;M=M;}
	     i++;
	 }
	 i=0;
	 while(i<=M)
	 {
		 A[i]=str[i];
		 i++;
	 }
	 A[M+1]=substr[0];
	 A[M+2]=substr[1];
	 A[M+3]=substr[2];
	 while(i<=n-1)
	 {
		 A[i+3]=str[i];
		 i++;
	 }
	 i=0;
	 while(i<=n+2)
	 {
	   printf("%c",A[i]);
	   i++;
	 }
	 printf("\n");
	 }
}
