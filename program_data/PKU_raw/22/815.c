void main()
{
   char c;
   int value=0,i=0,max,next=-1,k,n,a[300]={0};
   while((c=getchar())!='\n')
   {
    if(c==',')
     {a[i]=value;i=i+1;value=0;}
    else value=value*10+c-'0';
   }
   a[i]=value;i=i+1;
   max=a[0];
   k=1;
   n=i;
   while(k<n)
   { 
     if(a[k]>max)
      {next=max; max=a[k];}
     else 
     if((a[k]<max)&&(a[k]>next))
     next=a[k];
     k++;
    }
     if(next!=-1) 
     printf("%d",next);
     else printf("No");
}