int main(){
	int i, n,a,b,sa=0,sb=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&a,&b);
		if(a==0&&b==1)sa++;
		else if(a==0&&b==2)sb++;
		else if(a==1&&b==2)sa++;
        else if(a==1&&b==0)sb++;
        
		else if(a==2&&b==0)sa++;
		else if(a==2&&b==1)sb++;

		else if((a==0&&b==0)||(a==1&&b==1)||(a==2&&b==2))continue;
	}
	if(sa>sb)printf("A");
	else if(sa<sb)printf("B");
	else if(sa==sb)printf("Tie");
	
    return 0;
}