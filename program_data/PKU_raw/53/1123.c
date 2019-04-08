int main(){
    int n,m=1,i,j;
    int dk[80];
    int kd[80];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&(dk[i]));
    }
    kd[0]=dk[0];
    for(j=0;j<n;j++){
        for(i=0;i<m;i++){
            if(dk[j]==kd[i]){
                break;
            }
		else if(i==m-1){
			kd[m]=dk[j];
			m++;
		}
		}
    }
    for(i=0;i<m-1;i++){
        printf("%d,",kd[i]);
    }
     printf("%d",kd[m-1]);
    return 0;
}
