
void main()
{
  int t,k=0,m=0,p,q,i,j,x=0,w=0;
  char a[3000]={'\0'},b[300][5]={'\0'},d[300][5]={'\0'},c[5]={'\0'};
	
  gets(a);
  t=strlen(a);
  for(i=0;i<t;i++)
  {
		if(a[i]!=',')
		{d[w][m]=a[i];m=m+1;}
		else
		{w=w+1;m=0;}
  }
  
  for(i=0;i<w+1;i++)
  {
	  if(d[i][0]<='9' && d[i][0]>='0')
	  {strcpy(b[k],d[i]);k=k+1;}
  }
  if(k==1)
  {printf("No\n");}
  else
  {
	for(i=0;i<k-1;i++)
	{
		for(j=i+1;j<k;j++)
		{
			p=strlen(b[i]);
			q=strlen(b[j]);
			if(p<q)
			{
				strcpy(c,b[i]);
				strcpy(b[i],b[j]);
				strcpy(b[j],c);
			}
			else if(p==q)
			{
				if(strcmp(b[i],b[j])<0)
				{strcpy(c,b[i]);
				strcpy(b[i],b[j]);
				strcpy(b[j],c);
				}
			}
		}
	}

	for(i=0;i<k-1;i++)
	{
		if(strcmp(b[i],b[i+1])!=0)
		{x=1;break;}
	}
	if(x==1)
	{printf("%s\n",b[i+1]);}
	else
	{printf("No\n");}
  }


}


