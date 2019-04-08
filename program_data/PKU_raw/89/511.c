int main()
{
    int i,j,k,num,a[10000],b[10000],famous;
    famous =0;
    scanf("%d",&num);
    for(k=0;k<num;k++)
    {
    a[k]=0;
    b[k]=0;
    } 
    scanf("%d %d",&i,&j);
    while(i!=0 || j!=0)
    {
      a[i]=a[i]+1;
      b[j]=b[j]+1;
      scanf("%d %d",&i,&j);
    }
     for(k=0;k<num;k++)
     {
       if(a[k]==0 && b[k] == num -1)
       {
       printf("%d",k);
       famous ++;
       }
     }
     if (famous == 0)
     printf("NOT FOUND");
  
     
}
