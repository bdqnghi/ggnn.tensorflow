

int main()
{
	int n=1,m=1;
	int res[100];
	int t=0;
    
    for(;t<100;t++){
            res[t]=0;
            }
    t=0; 
	
	for(;n!=0&&m!=0;){
                      
	scanf("%d%d",&n,&m);

	struct per{
		int a;
		int b;
	}*p;
        p=(struct per *)malloc(sizeof(per)*n);

	int i;

	for(i=0;i<n;i++){
		(p+i)->a=i+1;
		(p+i)->b=i+1;
	}

	int *out;
	out=(int *)malloc(sizeof(int)*n);

	for(i=0;i<n;i++){
		out[i]=0;
	}

	int r=n;
	int j=0;
	

	for(;out[n-1]==0;){
                                   
	    	    
		for(i=0;i<n;i++){
                         
            if((p+i)->b==0){
				continue;
			}
                         
			else if((p+i)->b-m*j==m){
				out[j]=(p+i)->a;
				(p+i)->b=0;
				j++;
			}
			else{
				(p+i)->b+=(n-j);
			}
		}		
	}
	
                   if(n!=0&&m!=0){
                   res[t]=out[n-1];

                   t++;}
         free(p);
	free(out);


        }
    
    for(t=0;res[t]!=0;t++){
                           printf("%d\n",res[t]);
    }

	return 0;
}