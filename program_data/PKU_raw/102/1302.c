int main()
{ 
    int n,i;
    scanf("%d",&n);
    struct student 
    {
           char a[7];
           float b;
    };
    struct student c[n];  
    for(i=0;i<n;i++)
    {
                    scanf("%s %f",c[i].a,&c[i].b);
    }
    for(i=0;i<n;i++)
    {
                    for(int t=1;t<n-i;t++)
                    {
                            if(strlen(c[i].a)>strlen(c[i+t].a))
                            {
                            struct student k;
                            k=c[i];c[i]=c[i+t];c[i+t]=k;
                            }
                            else if(strlen(c[i].a)==strlen(c[i+t].a))
                            {
                                 if(strlen(c[i].a)==4)
                                 {
                                 if(c[i].b>c[i+t].b)
                                 { 
                                 struct student k;
                                 k=c[i];c[i]=c[i+t];c[i+t]=k;
                                 } 
                                 }
                                 else
                                 {
                                 if(c[i].b<c[i+t].b)
                                 { 
                                 struct student k;
                                 k=c[i];c[i]=c[i+t];c[i+t]=k;
                                 }
                                 }
                            }
                    }
    }
                     for(i=0;i<n-1;i++)
                     {   
                     printf("%.2f ",c[i].b);
                     } 
                      printf("%.2f",c[n-1].b);             
   }