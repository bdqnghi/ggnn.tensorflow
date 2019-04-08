/*
 * juzhenguiling.cpp
 *
 *  Created on: 2010-12-2
 *      Author: Administrator
 */
int a[100][100];
int zero(int n,int sum){
	if(n!=1){
	    int min,i,j,array[n][n];
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				array[i][j]=a[i][j];
			}
		}
		    for(i=0;i<n;i++){//i???
		    min=array[i][0];
		    for(j=1;j<n;j++){
			    if(array[i][j]<min){
				    min=array[i][j];
			    }
		    }
		    if(min!=0){
			    for(j=0;j<n;j++){
				    array[i][j]=array[i][j]-min;
			    }
		    }
		   	    }
	   	for(i=0;i<n;i++){//i???
			min=array[0][i];
			for(j=1;j<n;j++){
				if(array[j][i]<min){
					min=array[j][i];
				}
			}
			if(min!=0)
			{
				for(j=0;j<n;j++){
					array[j][i]=array[j][i]-min;
				}
			}
					}
	sum=sum+array[1][1];
	for(i=0;i<n;i++){//i???
		for(j=1;j<n-1;j++){
			a[i][j]=array[i][j]=array[i][j+1];
		}
	}
	for(i=0;i<n-1;i++){//i???
		for(j=1;j<n-1;j++){
			array[j][i]=array[j+1][i];
		}
	}
	for(i=0;i<n-1;i++){
			for(j=0;j<n-1;j++){
				a[i][j]=array[i][j];
			}
		}
	return zero(n-1,sum);
	}
	if(n==1)  return sum;
}
int main(){
	int n;
	cin>>n;
	int sum=0,i,t,r;
	for(i=1;i<=n;i++){
		for(t=0;t<n;t++){
			for(r=0;r<n;r++){
				cin>>a[t][r];
			}
		}
		cout<<zero(n,sum)<<endl;
	}
	return 0;
}

