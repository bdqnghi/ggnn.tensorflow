

void bubble_sort(int a[],int n)
    {
    int i,j,t;
    for(j=0;j<n;j++)
        { 
                 for(i=0;i<n-j-1;i++)
                {
                        if(a[i]<a[i+1])
                         {t=a[i];
                        a[i]=a[i+1];
                        a[i+1]=t;} 
                        else;          
                 }
        }    
   }

  
int main()
{
   int a[1000]={0},b[1000]={0};  
   int i,n;
   int  sum,amax,bmax,amin,bmin; 
   
   while((scanf("%d",&n))&&(n!=0))
   { 
     
          for(i=0;i<n;i++)  
          scanf("%d",&b[i]); //???      
          for(i=0;i<n;i++)
          scanf("%d",&a[i]);//??? 
        
          bubble_sort(a,n);
          bubble_sort(b,n);

           sum=0;amax=0;bmax=0;amin=n-1;bmin=n-1;
           for(i=0;i<n;i++) //??????? n? ???????? 
           { 
              if(a[amax]<b[bmax])
              {sum+=200;amax++;bmax++;}  
              else if(a[amax]>b[bmax])
              {sum-=200;amax++;bmin--;}     
              else 
                { 
                     if(a[amin]<b[bmin])
                     {sum+=200;amin--;bmin--;}
                      else if(a[amin]>b[bmin])
                       {sum-=200;bmin--;amax++;}
                      else   //?????? ????????????????? ????? ????????????????? 
                        { 
                            if(a[amax]>b[bmin])
                            {sum-=200;amax++;bmin--;}  //????? ????? ?? ??????? ?????????????? ?? ????????? ?????  ???????  ????????? 
                            else
                            break;
                        } 
          
                 }
          }          
 //??s??????  
   
      
    printf("%d\n",sum);     
    }

return 0; 
} 