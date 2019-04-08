
void main(){
	int i,j,num,count[10]={0};
	int stopskip[10][21]={0};
	scanf("%d",&num);
	for (i=1;i<=num;i++){
	    for (j=0;j<=stopskip[i][0];j++)
		   scanf("%d",&stopskip[i][j]);
	}
	for (i=1;i<=num;i++){
		if (stopskip[i][0]==0)
		count[i]=time;
	else if (stopskip[i][0]==1){
		if (stopskip[i][1]>=time)
			count[i]=time;
		else if (stopskip[i][1]<time&&stopskip[i][1]>=time-3)
			count[i]=stopskip[i][1];
		else count[i]=time-3;
	}
	}
	for (i=1;i<=num;i++){
		for (j=stopskip[i][0];j>1;j--){
	        if (((stopskip[i][j]+3*(j-1))>time)||(stopskip[i][j]==0))
	            continue;
		    else if ((stopskip[i][j]+3*(j-1)>time-3)&&(stopskip[i][j]+3*(j-1)<=time)){
				count[i]=stopskip[i][j];
				break;
			}
		    else{
				count[i]=(time-(stopskip[i][j]+3*j)+stopskip[i][j]);
	       break;
			}
		}
	}
for (i=1;i<=num;i++)
printf("%d\n",count[i]);
}