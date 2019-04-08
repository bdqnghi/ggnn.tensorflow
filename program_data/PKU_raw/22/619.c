int main()
{
	int a[300]={0};
	char x;
    int i=0,j,k,t;
	scanf("%c",&x);
	while(x!='\n')
	{
		if(x!=',')
		{
		 a[i]=a[i]*10+x-'0';
		}
		else i++;
		scanf("%c",&x);
	}
	if(i==0) printf("No\n");
	else 
	{
	  for(j=0;j<=i-1;j++)
	  {
		for(k=j+1;k<=i;k++)
		{
			if(a[k]>a[j]) {t=a[j];a[j]=a[k];a[k]=t;}
		}
	  }
      if(a[0]==a[i]) printf("No\n");
	  else
	  {
       for(j=1;j<=i;j++)
		   if(a[j]!=a[0]) {printf("%d\n",a[j]);break;}
	  }
	}	
}
