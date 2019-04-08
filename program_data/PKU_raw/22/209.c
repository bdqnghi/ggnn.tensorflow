void main()
{
    int i,k,a[300],max,max2,w,www;
    char c;
    k=0;
    for(i=0;;i++)
    {
        scanf("%d",&a[i]);
        k++;
        c=getchar();
        if(c!=',')  break;
    }
    w=0;
    if(k==1) w=1;
    if(k>1)
    {
       www=0;
       for(i=0;i<k;i++)
       { 
           if(a[i]!=a[0]) { www=1; break; }
       }
       if(www==0) w=1;
    }
    if(w==1) printf("No");
    if(w==0)
    {
       max=0;
       for(i=0;i<k;i++)
       {
           if(a[i]>max) max=a[i];
        }
       max2=0;
       for(i=0;i<k;i++)
       {
           if(a[i]>max2&&a[i]!=max) max2=a[i];
       }
       printf("%d",max2);
   }
}