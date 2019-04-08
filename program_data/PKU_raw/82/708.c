int main(){
int n,b,sz[100],s[100],z[100];
scanf("%d",&n);
int a=0;
int k=0;
for(int k=0;k<100;k++){
z[k]=0;
}
for(int i=0;i<n;i++){
	scanf("%d %d",&sz[i],&s[i]);
	if(sz[i]<=140&&sz[i]>=90&&s[i]<=90&&s[i]>=60){z[k]++;
	}else{
	k++;
	}
}
for(int k=0;k<100;k++){if(z[k]>z[k+1]){
		b=z[k+1];
		z[k+1]=z[k];
		z[k]=b;
	}
}
printf("%d",z[99]);
return 0;
}