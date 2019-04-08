int main(){
int a[100][100];
int b[100];
int m,j,r,n,k,p;

scanf ("%d",&p);
for (m=0;m<p;m++){
scanf ("%d %d",&n,&k);
for (j=0;j<n;j++){
	for (r=0;r<k;r++){
scanf ("%d",&a[j][r]);
	}
}
b[m]=0;
for (j=0;j<1;j++){
	for (r=0;r<k;r++){
b[m]=b[m]+a[j][r];
	}
}
for (j=n-1;j>n-2;j--){
	for (r=0;r<k;r++){
b[m]=b[m]+a[j][r];
	}
}
for (r=0;r<1;r++){
	for (j=1;j<n-1;j++){
b[m]=b[m]+a[j][r];
	}
}
for (r=k-1;r>k-2;r--){
	for (j=1;j<n-1;j++){
b[m]=b[m]+a[j][r];
	}
}

}
for (m=0;m<p;m++){
	printf("%d\n",b[m]);
}

return 0;
}

