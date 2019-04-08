int main(){
	int n,i,j=0,an[500],bn[500],max,l,out;
	char x;
	x=',';
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&bn[i]);
	for(i=0;i<n;i++){
		if(bn[i]%2==1){
			an[j]=bn[i];
			j++;
		}
	}
	l=j;
    for(i=l-1;i>=0;i--){
		for(j=0;j<i;j++){
			if(an[j]>=an[j+1]){
				max=an[j];
				an[j]=an[j+1];
				an[j+1]=max;
			}
		}
	}
	printf("%d",an[0]);
    out=an[0];
	for(i=0;i<l;i++){
		if(an[i]!=out){
			printf("%c%d",x,an[i]);
			out=an[i];
		}
	}
	return 0;
}