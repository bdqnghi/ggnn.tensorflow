int main(){
	int n,m,i,j,p,t,q;
	scanf("%d",&n);
	int sz[200],sz1[10000];
	for(i=0;i<n;i++){
		scanf("%d",&m);
		if(m==0){
			sz1[i]=60;
		}else{
		    for(j=0;j<m;j++){
			    scanf("%d",&sz[j]);
			}
			p=sz[m-1]+(m-1)*3;
			t=sz[m-2]+(m-2)*3;
			q=sz[m-3]+(m-3)*3;
			if(p<=57){
				sz1[i]=60-3*m;
			}else if(p<=60&&p>57){
				sz1[i]=sz[m-1];
			}else if(p>60){
				if(t<=57){
					sz1[i]=60-3*(m-1);
				}else if(t<=60&&t>57){
					sz1[i]=sz[m-2];
				}else if(t>60){
					if(q<=57){
						sz1[i]=60-3*(m-2);
					}else if(q<=60&&q>57){
						sz1[i]=sz[m-3];
					}
				}
			}
		    '\n';
		}
	}
	for(i=0;i<n-1;i++){
		printf("%d\n",sz1[i]);
	}
	printf("%d",sz1[n-1]);
	return 0;
}
