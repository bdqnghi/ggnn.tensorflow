
void main()
{
	int n, i, m, j, score[60], sum;
	scanf("%d", &n);
	
	for(i=0;i<n;i++){
		
		scanf("%d", &m);
		for(j=0;j<m;j++){
			scanf("%d", &score[j]);			
		}	
	    sum=0;					
	    if(m==0){
		   sum+=60;
		}
		else if(m!=0){
			for(j=0;j<m;j++){
			    sum=0;				
				if(score[j]+3*j>=60){
			       sum+=60-(3*j);
				   break;
				}
				else{
				   if(score[j]<=45){
				   sum+=60-(3*m);
				   }			   
				   else if(score[j]>45){
				   sum+=score[j];					   
				   break;
				   }
				}
			}
		}
		printf("%d\n", sum);
	}
}