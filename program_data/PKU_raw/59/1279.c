int main()
{
char fang[101][101];
int n,i,k,bing=0,m,j;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%s",fang[i]);
}
scanf("%d",&m);
for(i=0;i<n;i++){
for(k=0;k<n;k++){
	if(fang[i][k]=='@'){
fang[i][k]=0;
	}
		if(fang[i][k]=='#'){
fang[i][k]='y';
	}
	if(fang[i][k]=='.'){
fang[i][k]='z';
	}
}
}

for(j=0;j<m-1;j++){
for(i=0;i<n;i++){
for(k=0;k<n;k++){
	if(fang[i][k]==j){
		if(k==0&&fang[i][k+1]=='z'){
			fang[i][k+1]=j+1;
		}
		if(k==n-1&&fang[i][k-1]=='z'){
		fang[i][k-1]=j+1;
		}
		if(k>0&&k<n-1&&fang[i][k+1]=='z'){
		fang[i][k+1]=j+1;
		}
		if(k>0&&k<n-1&&fang[i][k-1]=='z'){
	fang[i][k-1]=j+1;
}
				if(i==0&&fang[i+1][k]=='z'){
			fang[i+1][k]=j+1;
		}if(i==n-1&&fang[i-1][k]=='z'){
		fang[i-1][k]=j+1;
		}if(i>0&&i<n-1&&fang[i+1][k]=='z'){
		fang[i+1][k]=j+1;
		}if(i>0&&i<n-1&&fang[i-1][k]=='z'){
	fang[i-1][k]=j+1;
}
	}
}
}
}
for(i=0;i<n;i++){
for(k=0;k<n;k++){
	if(fang[i][k]!='y'&&fang[i][k]!='z'){
bing++;
	}
}
}
printf("%d",bing);
		return 0;
}

