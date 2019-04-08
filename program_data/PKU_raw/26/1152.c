int main()
{
	char str[300]={' '},a[300]={' '};
	int j,i,k;
	gets(str);
	k=0;
	
	for(i=0;i<200;i++)
	{   
		
		for(j=k;j<200;j++)
		{
			if(str[j+1]!=' '||str[j]!=' ')
			{
				a[i]=str[j];
			    k=j+1;
			    break;
			}
			else;
		}
	}
    puts(a);
   
	return 0;

   

}