void main()
{
	char str[100][10] ,substr[100][3],s,str1[100][30]={0},str2[100][10]={0};
 int j,i=0,n,b,c;
  while(scanf("%s %s",str[i],substr[i])!=EOF)
  {      
    n=strlen(str[i]);
        s=str[i][0];
        for(j=1;j<n;j++)
     {
      if(str[i][j]>s) 
      {
       s=str[i][j];
       b=j;
      }
     }
		for(c=0,j=0;c<=b;c++,j++)
   str1[i][c]=str[i][j];
   for(c=0,j=b+1;j<n;c++,j++)
    str2[i][c]=str[i][j];
   strcat(str1[i],substr[i]);
   strcat(str1[i],str2[i]);
   printf("%s\n",str1[i]);
   i++;
   }
}
