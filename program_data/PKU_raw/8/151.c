
void input(int m,int n,int a[300],int b[300])
{
	int i=0,j=0;
	scanf("%d %d",&m,&n);
	for(i=0;i<m;i++)
         
	{scanf("%d",&a[i]);
		
	}
         for(j=0;j<n;j++)
         {
	scanf("%d",&b[j]);
		}
}
void row(int a[300])
{
	int i,j,t;
	for(i=0;i<300;i++)
	{
		for(j=i+1;j<300;j++)
		{
			if((a[j]<a[i])&&(a[j]!=0))
			{
				t=a[j];
				a[j]=a[i];
				a[i]=t;
			}
		}
	}
         }
void com(int a[300],int b[300])
{
	int i=0,j=0,k;
       	for(i=0;i<300;i++)	
         { 
           if(a[i]==0)
                {k=i;break;}
	
		
		
	}
	for(j=0;j<300;j++)
         {if(b[j]!=0)
	
		a[k]=b[j];k++;
		
	}
}
void output(int a[300])
{
	int i;
         for(i=0;i<300;i++)
         {
                if(a[i]!=0)
		{printf("%d",a[i]);
                                break;    }
          }
		
           i++;
          
        
	for(i;i<300;i++)
	{
                if(a[i]!=0)
		{printf(" %d",a[i]);}
		
	}
}

void main()
{
  int x,y,a[300]={0},b[300]={0};
  input(x,y,a,b);
  row(a);row(b);
  com(a,b);
  output(a);
}


