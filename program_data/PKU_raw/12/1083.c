
int main()
{
    int i,k,j;
    int count=0;
    int sz[16]={0};
    for(i=0;i<16;i++){
	scanf("%d",&sz[i]);
	if(sz[i]==0){
	    for(k=0;k<i-1;k++){
		for(j=k+1;j<i;j++){
                      if(sz[k]==2*sz[j]||sz[k]*2==sz[j]){
			count++;
		    }
		}
	    }
	    printf("%d\n",count);
	    count=0;
	    i=-1;
	}
	
	if(sz[i]==-1){
	    break;
	}
    }
    return 0;
}

