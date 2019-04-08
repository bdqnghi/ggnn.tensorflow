int main()
{
    char smin[p],smax[p],ch[p],temp[p];
	int max=0,min=p,sum;
	int i,j,n;
    
	gets(ch);
	n=strlen(ch);
	sum=0;
	for(i=0;i<=n;i++)
	{
	  if((ch[i]==' ')||(ch[i]==',')||(i==n))
	  {
	    if ((sum<min)&&(sum>0))
		{
		    strcpy(smin,temp);
			min=sum;
		}
		if (sum>max)
		{
		    strcpy(smax,temp);
			max=sum;
		}
		sum=0;
	  }
	  else
	  {
	      sum++;
		  temp[sum-1]=ch[i];
	  }
	}
	
	for(j=0;j<max;j++)
		printf("%c",smax[j]);
    printf("\n");
	for(j=0;j<min;j++)
		printf("%c",smin[j]);
	return 0;
}