const int MAXN=1005;
main()
{    
     int n;    
     int t[MAXN], k[MAXN];    
     while(cin>>n, n)   
      {       
               int i;        
               for(i=0; i<n; i++) cin>>t[i];        
               for(i=0; i<n; i++) cin>>k[i];        
               sort(t, t+n); sort(k, k+n);        
               int fastT=n-1, slowT=0, fastK=n-1, slowK=0;        
               int total=0;        
               while(slowK<=fastK)        
               {            
                            if(t[fastT] > k[fastK])            
                            {                
                                             total += 200;                
                                             fastT--; 
                                             fastK--;            
                            }            
                            else if(t[fastT] < k[fastK])            
                            {                
                                             total -= 200;                
                                             slowT++; 
                                             fastK--;            
                            }           
                            else            
                            {                
                                             while(slowK<=fastK)                
                                             {                    
                                                                  if(t[slowT] > k[slowK])                    
                                                                  {                        
                                                                                           total += 200;                        
                                                                                           slowT++; 
                                                                                           slowK++;                    
                                                                  }                    
                                                                  else                    
                                                                  {                        
                                                                                           if(t[slowT] < k[fastK]) total -= 200;                        
                                                                                           slowT++; 
                                                                                           fastK--;                        
                                                                                           break;                    
                                                                  }               
                                             }            
                            }        
               }        
               cout<<total<<endl;    
      }    
      return 0;
}
