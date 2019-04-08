main()
{
     int n;
     scanf("%d",&n);
     for(int i=1;i<=n;i++)
     {
           int m;
           float sum=0;
           scanf("%d",&m);
           float p=2,q=1,pq;
           for(int i=1;;i++)
           {
                 float a;
                 a=p/q;
                 sum=sum+a;
                 if(i==m)
                 {
                      printf("%.3f\n",sum);
                      break;        
                 }
                 pq=p;
                 p=p+q;
                 q=pq;        
           }        
     }      
}  
