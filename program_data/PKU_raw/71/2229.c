void main()
{
	int n,i,j,y[200],m1[200],m2[200],mon[12],sum=0,t;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d%d",&y[i],&m1[i],&m2[i]);
	}
	for(i=0;i<n;i++){
		sum=0;
	
		if(m2[i]>m1[i]){t=m2[i];m2[i]=m1[i];m1[i]=t;}
		
		if(m2[i]>2){
			for(j=m2[i];j<m1[i];j++){
				if(j==3||j==5||j==7||j==8||j==10||j==12){mon[j]=31;}
				else {mon[j]=30;}
				sum+=mon[j];
			}
			if(sum%7==0){printf("YES\n");}
			else {printf("NO\n");}
		}
		else if(m1[i]==2&&m2[i]==1){printf("NO\n");}
		else if(m2[i]<=2&&m1[i]>2){
			if((y[i]%100!=0&&y[i]%4==0)||(y[i]%400==0)){
		    for(j=m2[i];j<m1[i];j++){
				if(j==1||j==3||j==5||j==7||j==8||j==10||j==12){mon[j]=31;}
				else if(j==2){mon[j]=29;}
				else {mon[j]=30;}
			     sum+=mon[j];
			}
	         if(sum%7==0){printf("YES\n");}
			 else {printf("NO\n");}
			}

		   else{
			  for(j=m2[i];j<m1[i];j++){
				 if(j==1||j==3||j==5||j==7||j==8||j==10||j==12){mon[j]=31;}
				 else if(j==2){mon[j]=28;}
			     else {mon[j]=30;}
			     sum+=mon[j];
				}
				if(sum%7==0){printf("YES\n");}
			    else {printf("NO\n");}
			}
		}
	}



}