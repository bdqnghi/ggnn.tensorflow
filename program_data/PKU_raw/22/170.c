
void main()
{
     char str[300];
     int sum[200]={0},counter=0,i=0,j,t;
	 gets(str);
    
      
    while(str[i]!='\0')
	{  if(str[i]!=',')
       sum[counter]=sum[counter]*10+(str[i]-'0');
	else {
		counter++;
	}
	   i++;
	}

    if(counter<=0)
	printf("No");
	else
	{
		for(i=0;i<counter;i++)
		  for(j=i+1;j<=counter;j++)
		    if(sum[i]<sum[j])
			{
				t=sum[i];
				sum[i]=sum[j];
				sum[j]=t;
			}
	     t=0;
		for(i=1;i<=counter;i++)
		{
			if(sum[i]==sum[0]) t++;
		}
	 if(t==counter) printf("No");
	 else printf("%d",sum[t+1]);
    }
}