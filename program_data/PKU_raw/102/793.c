

int main()
{
  int n;
  int i; 
  int j=0, k=0;
  char v[10];
  float h[45];
  float h1[45];
  float h2[45];
  int count1, count2;
 float temp;
  

  
  scanf("%d", &n);
  
    for(i=0; i<n; i++)
  {
    h[i]=0;
    h1[i] = 0;
    h2[i] = 0;
  }
  
  for(i=0; i<n; i++)
  {
    scanf("%s%f", v, &h[i]);
    if(!strcmp(v, "male"))
    {
      h1[j] = h[i];
      j++;
    }
    
    else
    {
      h2[k] = h[i];
      k++;
    }
  }

  
  count1 =j;
  count2= k;
  
  for(i=0; i<count1-1; i++)
    for(j=count1-1; j>i; j--)
    {
      if(h1[j]<h1[j-1])
      {
        temp = h1[j];
        h1[j] = h1[j-1];
        h1[j-1] = temp;
      }
    }
    
   
      
  for(i=0; i<count2-1; i++)
    for(j=count2-1; j>i; j--)
    {
      if(h2[j]> h2[j-1])
      {
        temp = h2[j];
        h2[j] = h2[j-1];
        h2[j-1] = temp;
      }
    }
    
  for(i=0; i<count1; i++)
      printf("%.2f ", h1[i]);
    
  for(i=0; i<count2-1; i++)
      printf("%.2f ", h2[i]);
  printf("%.2f", h2[i]);
      
        
    return 0;
  }
  
