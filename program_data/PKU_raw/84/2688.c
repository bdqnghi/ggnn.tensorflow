int main(){
	int n, m;
	int i=0, max1=0, max2=0, tmp=0;
    scanf("%d", &n);
   	for(i=0; i<n; i++){
		scanf("%d", &m);
		if(m>max1){
			tmp = max1;
			max1 = m;
			max2 = tmp;
		}
		else {
			if(m<max1 && m>max2){
				max1 = max1;
			    max2 = m;
			}
			else{
				max1 = max1;
				max2 = max2;
			}
	}
	}
	printf("%d\n", max1);
         printf("%d\n", max2);
	return 0;
}