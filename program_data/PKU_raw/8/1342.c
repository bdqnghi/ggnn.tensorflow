
int x[100],y[100],c[200];
int m,n;
void scanf()
{   
    scanf("%d %d",&m,&n);
    int i;
    for(i=0;i<m-1;i++)
    {
        scanf("%d ",&x[i]);
    }
    scanf("%d\n", &x[m-1]);
    
    for(i=0;i<n-1;i++)
    {
        scanf("%d ",&y[i]);
    }
    scanf("%d\n",&y[n-1]);
   
}

void order()
{
    int j,i,b;
    for(j=0;j<m;j++) 
    {
      for(i=j;i<m;i++)  
      if(x[j]>x[i])
      {
          b=x[j];
          x[j]=x[i];
          x[i]=b;
      }
    }
    
     for(j=0;j<n;j++) 
    {
      for(i=j;i<n;i++)  
      if(y[j]>y[i])
      {
          b=y[j];
          y[j]=y[i];
          y[i]=b;
      }
    }
   
}

void together()
{
    int s;
   
    for(s=0;s<m;s++)
    {
        c[s]=x[s];
    }
    
    for(s=m;s<m+n;s++)
    {
        c[s]=y[s-m];
    }
    
}

void print()
{
    int i;
    for(i=0;i<m+n-1;i++)
    {
        printf("%d ",c[i]);
    }
    printf("%d",c[m+n-1]);
}

int main()
{
    scanf();
    order();
    together();
    print(); 

    
}