int main(){
	int sz[100],aged[100];
	char num[100][11],anum[100][11],q[100][11];
	int n,i,k,j=0,s,p,e=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",num[i]);
		scanf("%d",&sz[i]);
	}for(i=0;i<n;i++){
			if(sz[i]>=60){
				aged[j]=sz[i];
				strcpy(anum[j],num[i]);
				j++;
			}
	}for(s=1;s<j;s++){
	for(k=0;k<j-s;k++){
			if(aged[k]<aged[k+1]){
                e=aged[k+1];
				aged[k+1]=aged[k];
				aged[k]=e;
				strcpy(q[k],anum[k+1]);
				strcpy(anum[k+1],anum[k]);
				strcpy(anum[k],q[k]);
			}
		}
	}for(p=0;p<j;p++){
				printf("%s\n",anum[p]);
			}for(i=0;i<n;i++){
				if(sz[i]<60){
					printf("%s\n",num[i]);
				}
			}return 0;
		}