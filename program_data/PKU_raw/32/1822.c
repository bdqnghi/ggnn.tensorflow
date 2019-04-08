
void main()
{
    int n;
	int a[100]={0},b[100]={0},r[100][100]={0};   
    int i,j,t=0,l1,l2; 
	char c[100];

	
	scanf("%d",&n);
	
	while(1)
    
{
	if(getchar()=='\n') t++;


	//a
	for(i=0;i<100;i++)
		c[i]='\0';
		
	for(i=0;(c[i]=getchar())!='\n';i++);

	l1=strlen(c)-1;

	for(i=0;i<100;i++)
		a[i]=0;

	for(i=0;i<l1;i++)
		a[l1-1-i]=c[i]-48;

	

	//b
    for(i=0;i<100;i++)
		c[i]='\0';
		
	for(i=0;(c[i]=getchar())!='\n';i++);

	l2=strlen(c)-1;

	for(i=0;i<100;i++)
		b[i]=0;
	
	for(i=0;i<l2;i++)
		b[l2-1-i]=c[i]-48;
	
  
	
		

  for(i=0;i<l1;i++)   
      {   
          if(a[i]>=b[i])   
              a[i]=a[i]-b[i];//??????????????a[]   
          else   if   (a[i]<b[i])//??????   
              {   
                a[i]=a[i]+10-b[i];   
                  
                for(j=i+1;j<l1;j++)   
                    {   
                        if   (a[j])   //????0??1??????   
                            {   
                              a[j]--;//??   
                              break;//????   
                            }   
                          else   if   (!a[j])   //????0??9??????????   
                            a[j]=9;   
                    }   
                }   
        
     }  
  


	
         
  for(i=0;i<l1;i++)
  r[t][i]=a[i];
  
  if(t==n) break;
 

  
}
    
  for(t=1;t<=n;t++)
  {
	  for(j=l1-1;j>=0;j--)
		if(r[t][j]!=0) break;

	
      for(i=j;i>=0;i--)
		  printf("%d",r[t][i]);
	printf("\n");
  }






}

