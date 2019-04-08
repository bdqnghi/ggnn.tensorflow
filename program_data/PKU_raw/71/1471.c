int main()
{
	int n,i,j,y[200],m1[200],m2[200],d;
	int d1[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
	int d2[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d %d",&y[i],&m1[i],&m2[i]);
	}
	for(i=0;i<n;i++){
		d=0;
		if((y[i]%4==0&&y[i]%100!=0)||(y[i]%100==0&&y[i]%400==0)){
			if(m1[i]<m2[i]){
				for(j=m1[i];j<m2[i];j++){
					d+=d1[j];
				}
			}
			else{
				for(j=m2[i];j<m1[i];j++){
					d+=d1[j];
				}
			}
		}
		else{
            if(m1[i]<m2[i]){
				for(j=m1[i];j<m2[i];j++){
					d+=d2[j];
				}
			}
			else{
				for(j=m2[i];j<m1[i];j++){
					d+=d2[j];
				}
			}
		}
        if(d%7==0)  printf("YES\n");
		else  printf("NO\n");
        }
     return 0;
}

