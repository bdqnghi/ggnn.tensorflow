/*
 * ?????????.cpp
 * Created on: 2012-11-28
 * Author:???
 */
int n,i,j,k,a[150][150],sum,min1[150];
int f(int size){
	if(size==1)return sum;
	for(i=0;i<size;i++){
		min1[i]=a[i][0];
		for(j=0;j<size;j++){
			if(a[i][j]<min1[i]){
				min1[i]=a[i][j];
			}
		}
	}
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			a[i][j]=a[i][j]-min1[i];
		}
	}
	for(j=0;j<size;j++){
		min1[j]=a[0][j];
		for(i=0;i<size;i++){
			if(a[i][j]<min1[j]){
				min1[j]=a[i][j];
			}
		}
	}
	for(j=0;j<size;j++){
		for(i=0;i<size;i++){
			a[i][j]=a[i][j]-min1[j];
		}
	}
	sum=sum+a[1][1];
	for(i=1;i<size-1;i++){
		a[0][i]=a[0][i+1];
		a[i][0]=a[i+1][0];
		for(j=1;j<size-1;j++){
			a[i][j]=a[i+1][j+1];
		}
	}
	return f(size-1);
}

int main(){
	cin>>n;
	for(k=0;k<n;k++){
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				cin>>a[i][j];
			}
		}
		sum=0;
		cout<<f(n)<<endl;
	}
	return 0;
}