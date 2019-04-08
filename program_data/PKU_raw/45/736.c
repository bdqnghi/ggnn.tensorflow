void main()
{
	int i,j,t,length_1,length_2;
    char **pp;
	pp=(char **)malloc(2*sizeof(char *));
    pp[0]=(char *)malloc(50*sizeof(char));
	pp[1]=(char *)malloc(50*sizeof(char));
    scanf("%s",pp[0]);
    scanf("%s",pp[1]);
    length_1=strlen(pp[0]);
	length_2=strlen(pp[1]);
	for(i=0;i<length_2;i++)
	{ 
		t=0;
	  for(j=0;j<length_1;j++)
	  {
	    if(pp[0][j]!=pp[1][i+j])
		{
		  t=1;
		  break;
		}	
	  }
	  if(t==0)
	  {
			printf("%d",i);
			break;
	  }
	}
	free(pp[0]);
	free(pp[1]); 
	free(pp);
}