int main()
{
	int n,sz[300],i,j,k=0,b,c;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&sz[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(sz[i]==sz[j]){n--;
				for(k=0;k+j<n;k++){
					sz[j+k]=sz[j+k+1];
				}j--;
			}
		}
	}
	
	for(i=0;i<n-1;i++){
		printf("%d,",sz[i]);
	}
	printf("%d",sz[n-1]);
	return 0;

}


int ysf(int m, int n)
{
    int *p;                                 
    int i, j, k;                            

    p = (int *)malloc(sizeof(int) * n);     

    for (i = 0; i < n; i++) {               
        p[i] = 0;
    }

    k = n;                                  
    j = 1;                                  

    for (i = 0; i < n; i = (i + 1) % n) {   
        if (p[i]) {                         
            continue;                       
        }
        if (j++ == m) {                     
            p[i] = 1;                       
            k--;                            
            j = 1;                          
        }
        if (k == 0)    {                    
            break;                          
        }
    }
    free(p);                                
    return (i + 1);                         
}
