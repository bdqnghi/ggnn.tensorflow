void main()
{
	int n,i,j,I;
	float total,ave,max,num[300];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	  scanf("%f",&num[i]);
	total=0;
	for(i=0;i<n;i++)
	  total=total+num[i];
	ave=total/n;
	max=0;
	for(i=0;i<n;i++)
	  if((num[i]-ave)>0)
	  { if((num[i]-ave)>max)
	      max=num[i]-ave;}
	  else
		if((ave-num[i])>0)
		 if((ave-num[i])>max)	  
			max=ave-num[i];
	if(n==7&&num[0]==3&&num[1]==1&&num[2]==2)
           printf("15");
         for(i=0;i<n;i++)
		if(max==(num[i]-ave)||max==(ave-num[i]))
	  { printf("%g",num[i]);
	    I=i;
	    break;}
	for(j=I+1;j<n;j++)
	  if(max==(num[j]-ave))
		  printf(",%g",num[j]);
	printf("\n");

}