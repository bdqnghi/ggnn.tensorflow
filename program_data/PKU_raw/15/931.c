int main(){
     int sz[100][100],n,p,q,i,k,a,b;
		scanf("%d",&n);
		for(i=0;i<n;i++){
			for(k=0;k<n;k++)
			{
				scanf("%d",&(sz[i][k]));
                if(sz[i][k]==0){
				p=i;
				q=k;
				}
			}
		}
		for(i=n-1;i>=0;i--){
			for(k=n-1;k>=0;k--){
				if(sz[i][k]==0){
				a=i;
				b=k;
				}
			}
		}
            printf("%d",(p-a-1)*(q-b-1));
			return 0;
}

