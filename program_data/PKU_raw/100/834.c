int main()
{
	char ss[302]="0",
		zimu[27]="abcdefghijklmnopqrstuvwxyz";
	int count=0,s=0;
	scanf("%s",ss);
	int n=strlen(ss);
	for(int j=0;j<=27;j++)
	{
	      for(int i=0;i<n;i++)
		  {
			  if(ss[i]==zimu[j])
			  {
				  count+=1;
			  }
			  

		  }if(count!=0)
			  {
				  printf("%c=%d\n",zimu[j],count);
			 
			  }
			  if( count==0)
			  {s+=1;
				  continue;}
count=0;
			   
		  }
	if(s==28)
		printf("No");
	return 0;
}
   