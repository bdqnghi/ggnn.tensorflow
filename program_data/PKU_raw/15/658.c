void main(){
	int length,i,j,temp,start=-1,end;
	scanf("%d",&length);
	for(i=0;i<length;i++)
		for(j=0;j<length;j++){
			scanf("%d",&temp);
			if(temp==0){
				if(start==-1) start=i*length+j;
				end=i*length+j;
			}
		}
	printf("%d",(end/length-start/length-1)*(end%length-start%length-1));
}