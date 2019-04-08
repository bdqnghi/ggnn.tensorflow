  
int Height[26];  
int MaxLen[26];  
  
void LIS(int k){  
    memset(MaxLen,0,sizeof(MaxLen));  
    for(int i = 1;i <= k; i++){  
        MaxLen[i] = 1;  
        
        for(int j = 1;j < i;j++){  
            
            if(Height[i] <= Height[j]){  
                 
                int preMax = MaxLen[j] + 1;  
                if(preMax > MaxLen[i]){  
                    MaxLen[i] = preMax;  
                }  
            }  
        }  
    }  
}  
   
int main()  
{  
    int N,i;  
    scanf("%d",&N);  
        
        for(i = 1;i <= N;i++){  
            scanf("%d",&Height[i]);  
        }  
        LIS(N);  
        int Max = -1;  
        
        for(i = 1;i <= N;i++){  
            if(Max < MaxLen[i]){  
                Max = MaxLen[i];  
            }  
        }  
        if(N != 0){  
            printf("%d\n",Max);  
        }  
    
    return 0;  
}  