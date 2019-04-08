void main()
{
	char s1[103][12],s2[103][4];
	int i=0,j,max=0,k,u,len;
         while (scanf("%s%s",s1[i],s2[i])!=EOF)i++;
		 for(j=0;j<i;j++)
		 {
			 len=strlen(s1[j]);
			 max=0;u=0;
			 for(k=0;k<len;k++)
			 {
				 if(s1[j][k]>max)
				 {max=s1[j][k];u=k;}
			 }
			 for(k=0;k<=u;k++)
			 printf("%c",s1[j][k]);
			 for(k=0;k<=2;k++)
				 printf("%c",s2[j][k]);
			 for(k=u+1;k<len;k++)
				 printf("%c",s1[j][k]);
			 printf("\n"); 
		 }

}
