int main()
{
int Nchildren, Mstop, * Total;
int i,j;
int x,time;

scanf("%d",&Nchildren);

for(i=0;i<Nchildren;i++)
{
scanf("%d",&Mstop);

if(Mstop==0) 
    x=60;
else
{
    Total=(int *)malloc(Mstop); 
    for(j=0;j<Mstop;j++)
      scanf("%d",&Total[j]); 
    time=60; 
    x=60;   
    for(j=0;j<Mstop;j++)
    {
      time=time-Total[j]-3; 
      if(j>0)
        time=time+Total[j-1];         
      if(time>0)                             
        x=x-3;
      else                        
       {
         if(Total[j]<x) 
           x=Total[j];
         break;                          
       }
    }

    free(Total);
}
printf("%d\n",x); 
}
return 0;
}



