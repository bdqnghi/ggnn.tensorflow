


int k;
int h[30],f[30],l;

int main(){
	int i;
	scanf("%d",&k);
	for(i=0;i<k;i++){
		scanf("%d",h+i);
	}
	l=0;
	for(i=k-1;i>=0;i--){
		if(l==0||f[l-1]<=h[i]) 
			f[l++]=h[i];
		else{
			int mid,left=0,right=l-1;
			while(left<right){
				mid = (left+right)/2;
				if(h[i]>=f[mid]){
					left = mid+1;
				}
				else if(h[i]<f[mid]){
					right = mid-1;
				}
			}
			if(f[left]>h[i])
				f[left] = h[i];
			else
				f[left+1] = h[i];
		}
	}
	printf("%d\n",l);
}