int main()
{
    int n;
    int p,q;
    scanf("%d", &n);
    struct patient{
           char id[20];
           int age;
           }pa1[100],pa2[100],t;
    int i;
    for(i=0;i<n;i++)
    {
                    scanf("%s%d", pa1[i].id, &pa1[i].age);
    }
     for(i=0;i<n;i++)
    {
                   strcpy(pa2[i].id,pa1[i].id);
                   pa2[i].age=pa1[i].age;
    }
    
 
    
    
    
    for(p=1;p<n;p++)
    {
                    for(q=0;q<n-p;q++)
                    {
                            if(pa1[q].age>pa1[q+1].age)
                            {
                                        t=pa1[q];
                                        pa1[q]=pa1[q+1];
                                        pa1[q+1]=t;
                            }
                    }
    }
    
   
    
    
    
    
    int a[1000];
    int s=0,h;
    for(p=n-1;p>=0;p--)
    {
                       if(pa1[p].age>=60)
                       {
                            a[s]=pa1[p].age;  
                            s++;          
                       }
    }
     
    for(h=0;h<s;h++)
    {
                    for(p=h+1;p<s;p++)
                    {
                                      if(a[p]==a[h])
                                      {
                                                    a[p]=0;
                                      }
                    }
    }
      
      
      
      
      
      
      
      for(h=0;h<s;h++)
      {               
                    for(p=0;p<n;p++)
                    {
                              if(pa2[p].age==a[h])
                              {
                                        printf("%s\n", pa2[p].id);
                              }
                    }
      }
                    
                    
                    
                    
                    
    for(p=0;p<n;p++)
    {
                    if(pa2[p].age<60)
                    {
                                     printf("%s\n", pa2[p].id);
                    }
    }
  
    return 0;
}          