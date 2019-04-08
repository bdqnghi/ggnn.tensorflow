int main(){
	int n,i,s1[100],s2[100],c=0,max=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&(s1[i]),&(s2[i]));
		if(i==0){
			if(s1[i]>=90&&s1[i]<=140&&s2[i]>=60&&s2[i]<=90){
				c++;
				max=c;
			}else{
				continue;
			}
		}else{
			if(s1[i]>=90&&s1[i]<=140&&s2[i]>=60&&s2[i]<=90){
				c++;
				if(max<c){
					max=c;
				}
			}else{
				c=0;
			}
		}
	}
	printf("%d",max);
	return 0;
}