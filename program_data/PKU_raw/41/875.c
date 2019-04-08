int main()
{
    int a,b,c,d,e,as,bs,cs,ds,es;
    for(a=1;a<6;a++)
      for(b=1;b<6;b++) {
        if(b==a) continue;
        for(c=1;c<6;c++){
         if(c==b || c==a) continue;
           for(d=1;d<6;d++){
            if(d==c||d==b||d==a) continue;
              for(e=1;e<6;e++){
                if(e==d || e==c || e==b || e==a) continue;
                as= (e==1);
                bs= (b==2);
                cs= (a==5);
                ds= (c!=1);
                es= (d==1);
                if(((a==1 ||a==2)&&as) ||((a!=1&&a!=2)&&(as==0)))
                  if(((b==1 ||b==2)&&bs) ||((b!=1&&b!=2)&&(bs==0)))
                    if(((c==1 ||c==2)&&cs) ||((c!=1&&c!=2)&&(cs==0)))
                      if(((d==1 ||d==2)&&ds) ||((d!=1&&d!=2)&&(ds==0)))
                        if(((e==1 ||e==2)&&es) ||((e!=1&&e!=2)&&(es==0)))
                        if(e!=2&&e!=3)
                        {
                                       printf("%d %d %d %d %d",a,b,c,d,e);
                                       }
                                       }
                                       }
                                       }
                                       }
    
    
        return 0;
}