
int cmp(const void* elem1,const void * elem2){
	int * p1,*p2;
	p1 = (int *) elem1;
	p2 = (int *) elem2;
	if(*p1 < *p2) return 1;
	if(*p1 == *p2 ) return 0;
	if(*p1 > *p2) return -1;
}


int main(){
	int n , i ,j ;
	int a[1005],b[1005];
	int p1,p2,end1,end2;
	int win;
	while(1){
		cin>>n;
		if(n == 0) break;
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		for(i = 0;i < n;i++)
			cin>>a[i];
		for(i = 0;i < n;i++)
			cin>>b[i];

		qsort(a, n ,sizeof(int),cmp);
		qsort(b, n ,sizeof(int),cmp);
	
		win = 0;
	

		for(p1 = 0, p2 = 0, end1 = n-1,end2 = n-1 ; p1<=end1 && p2<=end2 ;){
			if(a[p1] > b[p2]){
				win ++;
				p1++;
				p2++;
			}
			if(a[p1] < b[p2]){
				win --;
				end1--;
				p2++;
			}
			if(a[p1] == b[p2]){
				if(a[end1] > b[end2]){
					win ++;
					end1 --;
					end2 --;
				}
				else if(a[end1] == b[end2]){
					if(a[end1] == b[p2]){
						end1 --;
						p2++;
					}
					else{
						win--;
						end1--;
						p2++;
					}
				}
				else {
					win--;
					end1--;
					p2++;
				}
			}
		}				
		cout<<win * 200 <<endl;
		
	}
	return 0;
}
