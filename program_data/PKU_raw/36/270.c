void main()
{
	int i, j,d1,d2;
	char str1[1000],str2[1000],c;
 scanf("%s", str1 );
  scanf("%s", str2 );
  d1=strlen(str1);
  d2=strlen(str2);
  if (d1!=d2)
	  printf("NO");
  else
  {
	  
      for (i=0;i<d1-1;i++)
	   for(j=i;j<d1;j++)
		   if (str1[j]<str1[i])
		   {
			   c=str1[i];  str1[i]=str1[j];  str1[j]=c;
		   }
     for (i=0;i<d2-1;i++)
	   for(j=i;j<d2;j++)
		   if (str2[j]<str2[i])
		   {
			   c=str2[i];  str2[i]=str2[j];  str2[j]=c;
		   }

	  
 
 
	if (strcmp(str1,str2)==0)
		printf("YES");
	else
		printf("NO");
  }
 

 
}
