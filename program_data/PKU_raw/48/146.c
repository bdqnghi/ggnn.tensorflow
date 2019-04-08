/*
 * 321.cpp
 *
 *  Created on: 2011-1-9
 *      Author: jsgl
 */

int a[9][9];
int b[9][9];
void fanzhi(int n)
{   if(n==0) return;
	int i,j;
	for(i=0;i<9;i++){
		for(j=0;j<9;j++){
			if(a[i][j]!=0){
				b[i][j]=b[i][j]+a[i][j]*2;
				b[i][j+1]=b[i][j+1]+a[i][j];
				b[i+1][j+1]=b[i+1][j+1]+a[i][j];
				b[i-1][j+1]=b[i-1][j+1]+a[i][j];
				b[i][j-1]=b[i][j-1]+a[i][j];
				b[i-1][j-1]=b[i-1][j-1]+a[i][j];
				b[i+1][j-1]=b[i+1][j-1]+a[i][j];
				b[i+1][j]=b[i+1][j]+a[i][j];
				b[i-1][j]=b[i-1][j]+a[i][j];
			}
		}
	}
	for(i=0;i<9;i++){
			for(j=0;j<9;j++){
				a[i][j]=b[i][j];
				b[i][j]=0;

			}
	}
	fanzhi(n-1);


}


int main(){
	int i,j;
int m,n;

cin>>m;
cin>>n;
for(i=0;i<9;i++){
	for(j=0;j<9;j++){
		a[i][j]=0;
		if(i==4&&j==4) a[i][j]=m;
          b[i][j]=0;
	}
}
fanzhi(n);



for(i=0;i<9;i++){
	for(j=0;j<9;j++){
		if(j!=8)
cout<<a[i][j]<<" ";
		else cout<<a[i][j];
	}
	cout<<endl;
}

}


