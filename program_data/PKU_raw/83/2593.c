int main()
{
      int i,b,n;
      float GPA,e;
      scanf("%d ",&n);
      float sz[n],xy[n],mm[n];
      for(i=0;i<n;i++){
      scanf("%f",&sz[i]);
      e+=sz[i];
      }
      for(i=0;i<n;i++){
      scanf("%f",&xy[i]);
      }
      for(i=0;i<n;i++){
      if(xy[i]>=90)
         mm[i]=4.0;
      else{
          if(xy[i]>=85)
             mm[i]=3.7;
           else{
                if(xy[i]>=82)
                       mm[i]=3.3;
                    else{
                        if(xy[i]>=78)
                           mm[i]=3.0;
                        else{
                            if(xy[i]>=75)
                            mm[i]=2.7;
                            else{
                                if(xy[i]>=72)
                                   mm[i]=2.3;
                                else{
                                    if(xy[i]>=68)
                                    mm[i]=2.0;
                                    else{
                                        if(xy[i]>=64)
                                           mm[i]=1.5;
                                        else{
                                            if(xy[i]>=60)
                                               mm[i]=1.0;
                                            else{
                                                mm[i]=0.0;}}}}}}}}}
      }
      for(i=0;i<n;i++){
      GPA+=sz[i]*mm[i]/e;
      }
      printf("%.2f",GPA);
      return 0;
}