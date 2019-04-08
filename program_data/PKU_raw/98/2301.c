int main()
{
  int n;
  int i,j;
  int k;
  int end=0;;
  scanf("%d",&n);
  char dz[50];
  for(i=0;i<n;i++)
  {
     for (i = 0; i < n; i++) {   
    scanf("%s", dz);    
    k = strlen(dz);    
  
    if (end + k +1> 80) {
        printf("\n");       
        end = 0;             
    }
    else if (end > 0) {       
        printf(" ");        
        end++;               
    }
    printf("%s", dz);      
    end += k;            
}
  }
return 0;
}
