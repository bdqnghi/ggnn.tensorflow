int main()
{
	int j,i,k=0,m;
     char s[1000];
	 scanf("%s",s);
     if(s[0]>96)
		 i=s[0]-96;
	 else
		 i=s[0]-64;
	 for(j=0;s[j]!='\0';j++)
	 {
         if(s[j]>96)
		 m=s[j]-96;
	     else
		 m=s[j]-64;
		 if (m==i)
             k++;
		 else
		 {
			 printf("(%c,%d)",i+64,k);
			 i=m;
			 k=1;
		 }
	 }
	 printf("(%c,%d)",i+64,k);
	return 0;
}
