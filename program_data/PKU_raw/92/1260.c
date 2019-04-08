void list(int x[],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
          for(j=i+1;j<n;j++)
          {
                   if(x[j]>x[i])
                      {temp=x[i];x[i]=x[j];x[j]=temp;}
          }
    }
} 
int main()
{
    void list(int x[],int n);
    int n,i,tian[1010],qi[1010],win=0,lose=0,*ptianlow,*pqilow,*ptianfast,*pqifast,money;
  for(;;money=win=lose=0)
  {
    scanf("%d",&n);
    if(n==0)
    break;
    else
    {
    
    for(i=0;i<n;i++)
          scanf("%d",&tian[i]);
    for(i=0;i<n;i++)
          scanf("%d",&qi[i]);
    list(tian,n);
    list(qi,n);
    
    ptianlow=&tian[n-1];
    ptianfast=&tian[0];
    pqilow=&qi[n-1];
    pqifast=&qi[0];
    
    for(;ptianfast<ptianlow+1;)
    {
    
    if(*ptianlow<*pqilow)
    {
          lose++;
          ptianlow--;
          pqifast++;
          continue;
    }
          
    else if(*ptianlow>*pqilow)
    {
          win++;
          ptianlow--;
          pqilow--;
          continue;
    }
    
    else
    {
          if(*ptianfast<*pqifast)
          {
                lose++;
                ptianlow--;
                pqifast++;
                continue;
          }
          else if(*ptianfast>*pqifast)
          {
                win++;
                ptianfast++;
                pqifast++;
                continue;
          }
          else
          {
                if(*ptianlow<*pqifast)
                {
                   lose++;
                   ptianlow--;
                   pqifast++;
                }
                else
                {
                    ptianlow--;
                    pqifast++;
                }
          }
        
    }
	}
    
    money=win*200-lose*200;
    printf("%d\n",money);
}}

return 0;
}
                
