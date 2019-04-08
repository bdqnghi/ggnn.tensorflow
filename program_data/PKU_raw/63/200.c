int main(){
	int i,j,k,a[255][255],b[255][255],x1,y1,x2,y2;//???????
	cin>>x1>>y1;
	for(i=0;i<x1;i++)//??
		for(j=0;j<y1;j++)
			cin>>a[i][j];
	cin>>x2>>y2;//??
		for(i=0;i<x2;i++)
			for(j=0;j<y2;j++)
				cin>>b[i][j];
	int ji[255][255];//??????
	for(i=0;i<x1;i++)//??
		    	for(j=0;j<y2;j++)
		    		ji[i][j]=0;
	for(i=0;i<x1;i++)//????
	    	for(j=0;j<y2;j++)
	    		for(k=0;k<y1;k++)
	    			{ji[i][j]=ji[i][j]+a[i][k]*b[k][j];}
	int count=0;
	for(i=0;i<x1;i++)//????
		for(j=0;j<y2;j++)
			{cout<<ji[i][j]; count++;
			if(count%y2==0)cout<<'\n';
			else cout<<' ';
			}

}