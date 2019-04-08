int main()
{
	int n,i,j,total1[200],total2[200];
	scanf("%d",&n);
	int year[200],mon1[200],mon2[200];
	for(i=0;i<n;i++){
    scanf("%d %d %d",&(year[i]),&(mon1[i]),&(mon2[i]));
}
	for(i=0;i<n;i++){
 total1[i]=0;
}
    for(i=0;i<n;i++){
                     total2[i]=0;
                     }                 
    for(i=0;i<n;i++){
    for( j = 1; j < mon1[i]; j++){ 	
		if(j==1||j==3||j==5||j==7||j==8||j==10||j==12)
			total1[i] += 31;	
		else if (j == 4 || j ==6 || j == 9 || j==11)
			total1[i] += 30;
		else if(j == 2)
			if(year[i]%400==0||(year[i]%4==0&&year[i]%100!=0))
				total1[i] += 29;
			else 
				total1[i] += 28;
			}	
	total1[i] +=1;
}
    
    for(i=0;i<n;i++){
    for( j = 1; j < mon2[i]; j++){ 	
		if(j==1||j==3||j==5||j==7||j==8||j==10||j==12)
			total2[i] += 31;	
		else if (j == 4 || j ==6 || j == 9 || j==11)
			total2[i] += 30;
		else if(j == 2)
			if(year[i]%400==0||(year[i]%4==0&&year[i]%100!=0))
				total2[i] += 29;
			else 
				total2[i] += 28;
			}	
	total2[i] +=1;
}
    for(i=0;i<n;i++){
    if((total1[i]-total2[i])%7==0)
    printf("YES\n");
    else
    printf("NO\n");

}
    return 0;
}	