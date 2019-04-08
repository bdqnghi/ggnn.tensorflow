int main()
{
char a[300];
int i,j,sum[200]={0},m=0;
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
     for(j=65;j<=90;j++)
	 {
		 if(a[i]==j)
		 {
		      sum[j]++;m++;
		 }
	 }
	  for(j=97;j<=122;j++)
	 {
		 if(a[i]==j)
		 {
			 sum[j]++;m++;
		 }
	 }
}
     if(m>0)
	 {
	      for(j=65;j<=122;j++)
		  {
			  if(sum[j]!=0)
		      printf("%c=%d\n",j,sum[j]);
		  }
	 }

     if(m==0)
	 {
    	printf("No");
	 }
return 0;
}