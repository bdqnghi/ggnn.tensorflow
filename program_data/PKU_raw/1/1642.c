int sum=0; 
int main()
{ void shu(int a,int b);
  int n=0,i=0,a=0,c=0,j=0;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {  scanf("%d",&a);
     for(j=2;j<=sqrt((double)a);j++)
       { if(a%j==0)
         { sum=sum+1;
           shu(j,a/j);
				} 
			
			}

	printf("%d",sum+1);
	if(i<n)
	 printf("\n");
	sum=0;
  
  }
 
  return(0);
} 
void shu(int a,int b)
{ int i=0;
  for(i=a;i<=sqrt((double)b);i++)
    {  if(b%i==0)
         { sum=sum+1;
           shu(i,b/i);
				
				}		
		}
}