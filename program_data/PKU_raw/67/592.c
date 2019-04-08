//?????




int main()
{
    int n,all,valid;
    int i;
    double x,y;
    scanf("%d",&n);
     scanf("%d %d",&all,&valid);
     x=(double)valid/all;
    for(i=1;i<n;i++)
    {
                    scanf("%d %d",&all,&valid);
                    y=(double)valid/all;
                    if(x-y>0.05)
                    printf("worse\n");
                    if(y-x>0.05)
                    printf("better\n");
                    if(x-y<0.05&&y-x<0.05)
                    printf("same\n");
     }     
     getchar();
     getchar();         
    
}

 
 
