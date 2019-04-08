int main()
{ 
	 int n,i,j=0,m=0;

	 scanf("%d",&n);

	 char s1[100][10],s2[100][10],p1[100][10],p2[100][10],z1[100][10],z2[100][10],t[10];

	 for(i=0;i<n;i++)
	 {
		 scanf("%s",s1[i]);

		 scanf("%s",s2[i]);
	 }
	 for(i=0;i<n;i++)
	 {
	 if(s2[i][1]!='\0'&&strcmp(s2[i],"60")>=0)
	 {  
	  strcpy(p1[j],s1[i]);

	  strcpy(p2[j],s2[i]);

	  j++;
	 }
	 if(s2[i][2]>='0'&&s2[i][2]<='9'&&s2[i][3]=='\0')
	 {
	 strcpy(z1[m],s1[i]);

	  strcpy(z2[m],s2[i]);

	  m++;
	 }
	 }
	 int k=j;
	 for(i=k-1;i>=0;i--)
	 {
		 for(j=0;j<i;j++)
		 {
	 if(strcmp(p2[j],p2[j+1])<0)
	 {

		 strcpy(t,p2[j]);
 
	     strcpy(p2[j],p2[j+1]);

		  strcpy(p2[j+1],t);

		   strcpy(t,p1[j]);

		     strcpy(p1[j],p1[j+1]);

			   strcpy(p1[j+1],t);
	 }

		 }
	 }
 	 for(i=m-1;i>=0;i--)
	 {
		 for(j=0;j<i;j++)
		 {
	 if(strcmp(z2[j],z2[j+1])<0)
	 {

		 strcpy(t,z2[j]);
 
	     strcpy(z2[j],z2[j+1]);

		  strcpy(z2[j+1],t);

		   strcpy(t,z1[j]);

		     strcpy(z1[j],z1[j+1]);

			   strcpy(z1[j+1],t);
	 }

		 }
	 }
	 for(j=0;j<m;j++)
{
	printf("%s\n",z1[j]);
 }
 

 for(j=0;j<k;j++)
 {
	printf("%s\n",p1[j]);
 }
  for(i=0;i<n;i++)
  {
  if(!((s2[i][1]!='\0'&&strcmp(s2[i],"60")>=0)||(s2[i][2]>='0'&&s2[i][2]<='9'&&s2[i][3]=='\0')))
	  printf("%s\n",s1[i]);
  }
	 

	return 0;
}

