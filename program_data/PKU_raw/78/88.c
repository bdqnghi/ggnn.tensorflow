int main()
{
	int a[4]={20,40,10,50},i,j,t1,max;
	
	char c[4]={'z','q','s','l'},t2;
	
		for(i=0;i<4;i++)
		{
			max=i;
			for(j=i;j<4;j++)
		{
			if(a[i]<a[j])max=j;
			{
				t1=a[i];
				t2=c[i];
				a[i]=a[max];
				c[i]=c[max];
				a[max]=t1;
				c[max]=t2;
			}
				
		}
		}
			for(i=0;i<4;i++)
			printf("%c %d\n",c[i],a[i]);
		}


			    
				
	

	

	
    
