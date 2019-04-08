int main(){
	int x1,y1,x2,y2,i,j,k;
	cin>>x1;//??x1 
	cin>>y1;//??y1

int a[x1][y1];

for(i=0;i<x1;i++)//????a???
	for(j=0;j<y1;j++)
		cin>>a[i][j];
    cin>>x2;
	cin>>y2;
	int b[x2][y2],c[x1][y2];
for(i=0;i<x2;i++)//????b???
	for(j=0;j<y2;j++)
		cin>>b[i][j];

for(i=0;i<x1;i++){//?c??????0 
	for(j=0;j<y2;j++){
		c[i][j]=0;
		}
	}
for(i=0;i<x1;i++){//??????
	for(j=0;j<y2;j++){
	  for(k=0;k<y1;k++){
        c[i][j]=a[i][k]*b[k][j]+c[i][j];
        }


	}
	}

for(i=0;i<x1;i++){//????????
	for(j=0;j<y2;j++)
		{if(j<y2-1) cout<<c[i][j]<<" ";
		else cout<<c[i][j]<<endl;}
}
return 0;
}


