int w[200][200];
int main(){
int n;
cin>>n;
for(int i=0;i<n;i++){
for(int x=0;x<n;x++)
for(int y=0;y<n;y++)
cin>>w[x][y];
int s=0;
for(int m=1;m<n;m++){
	for(int x=0;x<n;x++){
		int minn=w[x][0];
		for(int y=m;y<n;y++)
			if(w[x][y]<minn)minn=w[x][y];
		w[x][0]-=minn;
		for(int y=m;y<n;y++)
			w[x][y]-=minn;
	}
	for(int y=0;y<n;y++){
		int minn=w[0][y];
		for(int x=m;x<n;x++)
			if(w[x][y]<minn)minn=w[x][y];
		w[0][y]-=minn;
		for(int x=m;x<n;x++)
			w[x][y]-=minn;
	}
	s+=w[m][m];
}
cout<<s<<endl;
}
return 0;
}