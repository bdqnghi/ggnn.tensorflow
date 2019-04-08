void main()
{
	char str1[50],*p1;
	char str2[50],*p2;
  	int i,d,j;
p1=str1;
 p2=str2;
	scanf("%s ", p1);
	scanf("%s", p2);
 
  for (i=0; *(p2+i)!=0;i++)
	{
	 if (*(p2+i) == *p1 )
	 {
		 d=i;
 for(j=0; *(p1+j)!=0;j++)
		 {
			 if (*(p2+i) == *(p1+j) )
		  i++;
			 else 
			 {
				 j=0;
				 break;
			 }
 }
 if (j!=0)
	 break;
	 }

 	 
	}
	printf("%d",d);
}


