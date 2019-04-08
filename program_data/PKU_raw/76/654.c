
int main(){
    int i,j,n;
	scanf("%d",&n);
	int x[n];
	int y[n];
	for(i=0;i<n;i++){
       scanf("%d %d",&(x[i]),&(y[i]));
    }
	int min,max;
	for(j=0;j<n;j++){
	for(i=0;i<n-j;i++){
		if(x[i]>x[i+1]){min=x[i];
		                x[i]=x[i+1];
		                x[i+1]=min;
						max=y[i];
						y[i]=y[i+1];
						y[i+1]=max;
		}
	}}
	int e=x[0];
	int f=y[0];
    for(i=1;i<n;i++){
		if(x[i]<e){e=x[i];}
		if(y[i]>f){f=y[i];}
	}
	int arc=y[0];
	int m=0;
	for(i=0;i<n-1;i++){
		if(arc<x[i+1]){printf("no"); 
		               break;
		}
		else{if(arc<y[i+1]){arc=y[i+1];}
		   m++;
		}
		if(m==n-1){printf("%d %d",e,f);}
	}
return 0;
}

