int main(){
    struct patient {
    char id[11];
    int age;
    }*p,*p60_up,*p60_low,t;
    
    int n,i,j,k=0;
    scanf ("%d",&n);
    p = (struct patient *) malloc( sizeof(struct patient) * n );
    
    for(i=0;i<n;i++){
        scanf("%s",&(p[i].id));
        scanf("%d",&(p[i].age));    
    }
    for(i=0;i<=n;i++){
        if(p[i].age>=60){
        k++;
        }
    }
    p60_up = (struct patient *) malloc( sizeof(struct patient) * k );
    p60_low= (struct patient *) malloc( sizeof(struct patient) * (n-k) );
    
    for(i=0,j=0;i<n;i++){
        if(p[i].age>=60){
           p60_up[j]=p[i];
           j++;
        }
    }for(i=0,j=0;i<n;i++){
        if(p[i].age<60){
           p60_low[j]=p[i];
           j++;
        }
    }
  for( j = 1 ; j <= k ; j++){
       for( i = 0; i < k - j; i++){
            if(p60_up[i].age<p60_up[i+1].age){
                t = p60_up[i+1];
			    p60_up[i+1] = p60_up[i];
			    p60_up[i] = t;
            }
       }
   }

    for(i=0;i<k;i++){
        puts(p60_up[i].id);
    }
    free(p60_up);
    for(i=0;i<n-k;i++){
        puts(p60_low[i].id);
    }
    free(p60_low);
	
	return 0;
}