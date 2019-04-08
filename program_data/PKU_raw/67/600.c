main()
{
 int n,p,q,a,b;
 float r,s;
 scanf("%d %d %d",&n,&p,&q);
 r=(float)q/(float)p;
 for(int i=1;i<=n-1;i++)
            {
             scanf("%d %d",&a,&b);
             s=(float)b/(float)a;
             if(r>s+0.05)
                       printf("worse\n");
             else if(s>r+0.05)
                       printf("better\n");
             else printf("same\n");           
            } 
 getchar();
 getchar();
 getchar();    
}