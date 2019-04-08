int main()
{
	int a[10],b[10],i,n;
	double g[10],c[10],jidian,xuefen;
	float GPA;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
        scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++){
		if(b[i]>=90 && b[i]<=100){
		    g[i]=4.0;
		}else if(b[i]>=85 && b[i]<=89){
			g[i]=3.7;
		}else if(b[i]>=82 && b[i]<=84){
		    g[i]=3.3;
		}else if(b[i]>=78 && b[i]<=81){
		    g[i]=3.0;
		}else if(b[i]>=75 && b[i]<=77){
		    g[i]=2.7;
		}else if(b[i]>=72 && b[i]<=74){
		    g[i]=2.3;
		}else if(b[i]>=68 && b[i]<=71){
		    g[i]=2.0;
		}else if(b[i]>=64 && b[i]<=67){
		    g[i]=1.5;
		}else if(b[i]>=60 && b[i]<=63){
		    g[i]=1.0;
		}else{g[i]=0;}
	}
	for(i=0;i<n;i++){
	    c[i]=g[i]*a[i];
		jidian+=c[i];
		xuefen+=a[i];
	}
	GPA=(float)(jidian/xuefen);
    printf("%.2f",GPA);
    return 0;
}