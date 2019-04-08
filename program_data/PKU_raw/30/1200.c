int main()
{
   int n,l,q=0,k1,k2,t,w,s=0,i;
   
   cin>>n;
   for(i=1;i<=n;i++)
   {
                    l=i;
                    do{
                        l=l/10;
                        q++;
                        }while(l!=0);
                        k2=i;
                        w=1;
                        for(t=1;t<=q;t++)
                        {
                                           k1=k2;
                                           k2=k1/10;
                                           if((k1-10*k2)%7==0&&(k1-10*k2)!=0||i%7==0)
                                           {w=0;}
                                           }
                                           if(w==1)
                                           s=s+i*i;
                    }
                    cout<<s;
                    
                    return 0;
    
}
