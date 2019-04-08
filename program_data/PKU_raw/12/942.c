int main()
{
    int i,j,k,l,geshu,get,n=0;
    int shuzu[15];
    for(j=0;;j++){
        n=0;	         
        for(i=0;;i++){		
	scanf("%d",&get);		
	    if(get==-1){
                goto end;
	    }
	    shuzu[i]=get;
	    if(get==0){
	        geshu=i;
		break;
	    }
	}
	for(k=0;k<geshu;k++){
	    for(l=0;l<geshu;l++){
	        if(shuzu[k]==2*shuzu[l]){
	            n=n+1;
	        }   
	    }
	}
	printf("%d\n",n);			
    }
    end:return 0;
}
