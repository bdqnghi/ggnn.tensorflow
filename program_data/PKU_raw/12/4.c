
int main(int argc, char* argv[])
{
    
	int p;
	for(p=1;p<=100;p++){
		int a[17];
    	int u,i=0;
        for (u=1;u<=16;u++){
			scanf("%d",&a[u]);
		    i++;
		    if (a[u]==0){
			     break;
			}
		}
		if (a[1]==-1){
			break;
		}
    	int j,k,t;
    	for(j=1;j<i-1;j++){
	    	for(k=j+1;k<i;k++){
		    	if(a[j]>a[k]){
				    t=a[k];
			    	a[k]=a[j];
			    	a[j]=t;
				}
			}
		}
	    int r,s,w=0;
    	for(r=1;r<i-1;r++){
	    	for(s=r+1;s<=i-1;s++){
	   	    	if(a[r]*2==a[s]){
			    	w=w+1;
			    	break;
				}
			}
		}
	    printf("%d\n",w);
	}
	return 0;
}
