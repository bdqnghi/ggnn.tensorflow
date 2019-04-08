int main()
{    int a,b,c,d,e,s;
    s=0;
    for(a=1;a<6;a++)
    {
        for(b=1;b<6;b++)
          {
            for(c=1;c<6;c++)
           {
                for(d=1;d<6;d++)
               {
                    for(e=1;e<6;e++)
                    {
                            if(e==1)
                            {
                                if(a<3)
                                s=s+1;
                            }
                            if(b==2)
                            {
                            if(b<3)
                            s=s+1;
                             }
                            if(a==5)
                            {
                                if(c<3)
                            s=s+1;
                            }
                            if(c!=1)
                            {
                                if(d<3)
                                s=s+1;
                            }
                            if(d==1)
                            {
                               if(e<3)
                                s=s+1; 
                            }
                    }
               }
         }
       }
                                                                                                                                                                               
    }
    if((s==2)&&(a!=b)&&(a!=c)&&(a!=d)&&(a!=e)&&(b!=c)&&(b!=d)&&(b!=e)&&(c!=d)&&(c!=e)&&(d!=e))                                                                                                                                                                                                                 ;else{a=5;b=2;c=1;d=3;e=4;}        
                             printf("%d %d %d %d %d\n",a,b,c,d,e);
                            
 
getchar();
getchar();
    return 0;
}
