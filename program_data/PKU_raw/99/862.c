int main (){
    int i,m,a=0,b=0,c=0,d=0;
	int yer[100];
	double q,w, e,r;
	scanf ("%d",&m);
for( i=0;i<m;i++){
		scanf("%d", &(yer[i]));
	}
 for(i=0 ;i<m;i++){
	 if(yer[i]<=18){
		 a+=1;
	 }else if(19<=yer[i]&&yer[i]<=35){
		 b+=1;
	 }else if(36<=yer[i]&&yer[i]<=60){
		 c+=1;
		 }else{
			 d+=1;
		 }
	}
            q=100.0*a/m;
			w=100.0*b/m;
			e=100.0*c/m;
			r=100.0*d/m;
        printf("1-18: %.2lf%%\n",q);
        printf("19-35: %.2lf%%\n",w);
        printf("36-60: %.2lf%%\n",e);
        printf("60??: %.2lf%%\n",r);
return 0;
}
