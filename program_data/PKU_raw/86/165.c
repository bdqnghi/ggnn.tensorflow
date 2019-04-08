
int main()
{  
	int n,m;
    scanf("%d",&n);
	int i,j;
	int a[100];  int b[100]={0};  int c[100]={0};
	int d[100]={0};
	int e,f,h;
	for(i=0;i<n;i++)
	{ 
		scanf("%d",&m);
		if(m==0)
			printf("60\n");
		else
		{
		for(j=0;j<m;j++)
		{
        scanf("%d",&a[j]);
        e=a[j]+3*j;
		h=e+3;
        
	  
		if(e<= 60 && h < 60)
					
			{
				
				f=60-3*(j+1);
				continue;
			}

		if(e <= 60 && h >= 60)
		{
		f =a[j];
	   
		}   continue;
		if(e>60)
        {
		f=60-3*j;
		continue;
		}	


			
		}
		printf("%d\n",f);
			

		
	}
	}

	return 0;
}
