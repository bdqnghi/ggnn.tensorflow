//
//  main.cpp
//  ds
//
//  Created by Love on 12-12-27.
//  Copyright (c) 2012? Love. All rights reserved.
//

int main(){
    int n;
    scanf("%d",&n);
    for (int i=0; i<n; i++) {
        int m;
        scanf("%d",&m);
      
        if (m==0) {
            printf("60\n");
            continue;
        }
        int num[100]={0};
        for (int j=1; j<=m; j++) {
            scanf("%d",&num[j]);
            
        }
       
            if (num[m]+3*m<=60) {
                printf("%d\n",(60-3*m));
                
            }else{
                int c=1;
                for (int k=m; k>1; k--) {
                    if (num[k]+3*(k-1)<=60&&num[k]+3*k>60) {
                        printf("%d\n",num[k]);
                        c=0;
                        break;
                        
                    }else if(num[k-1]+3*(k-1)<60&&num[k]+3*(k-1)>60){
                        printf("%d\n",(60-3*(k-1)));
                        c=0;
                        break;
                        
                    }
                    
                }
               
                
                
            
            }
    }
    return 0;
    
}