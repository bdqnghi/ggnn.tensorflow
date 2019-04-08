int main()
{
	int y,m1,m2,n,i,j;
	int d1[12]={31,29,31,30,31,30,31,31,30,31,30,31},d2[12],e1[12],e2[12];
	for(i=0;i<12;i++){
		if(i!=1) d2[i]=d1[i],e1[i]=e2[i]=0;
	    else     d2[i]=28,e1[i]=e2[i]=0;
	}
	for(i=0;i<12;i++){
		for(j=0;j<i;j++){
			e1[i]+=d1[j];
			e2[i]+=d2[j];
		}
	}
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d %d",&y,&m1,&m2);
		if(y%400==0||(y%4==0&&y%100!=0)){
			int f1=(e1[m1-1]>=e1[m2-1])?(e1[m1-1]-e1[m2-1]):(e1[m2-1]-e1[m1-1]);
			 if(f1%7==0)       
				 printf("YES\n");
			 else
				 printf("NO\n");
		}
		else{
			int f2=(e2[m1-1]>=e2[m2-1])?(e2[m1-1]-e2[m2-1]):(e2[m2-1]-e2[m1-1]);
			if(f2%7==0)				
				printf("YES\n");
			else
				printf("NO\n");
		}
	}
	return 0;
} 
 
