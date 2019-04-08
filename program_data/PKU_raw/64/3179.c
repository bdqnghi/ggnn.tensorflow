
double distance(double q,double w,double e,double r,double t,double y);

int main(){
    int a,b,e,f,g,h,n,i;
    double d[10][10],c;
    struct z
    {
        double j;
        double k;
        double l;
    }
    s[10];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%lf%lf%lf",&s[i].j,&s[i].k,&s[i].l);
    }
    for(a=0;a<n-1;a++){
        for(b=a+1;b<n;b++){
            d[a][b]=distance(s[a].j,s[a].k,s[a].l,s[b].j,s[b].k,s[b].l);
        }
    }
    for(e=n*(n-1)/2;e>0;e=e-1){
	    for(a=0,c=0;a<n-1;a++){
		    for(b=a+1;b<n;b++){
                          if(c<d[a][b]){
				    c=d[a][b];
                                    f=a;
			            g=b;
			  }
		    }
	    }
    	    d[f][g]=0;
            printf("(%.0lf,%.0lf,%.0lf)-(%.0lf,%.0lf,%.0lf)=%.2lf\n",s[f].j,s[f].k,s[f].l,s[g].j,s[g].k,s[g].l,c);
	}
	return 0;
}

double distance(double q,double w,double e,double r,double t,double y){
    double u;
    u=sqrt((q-r)*(q-r)+(w-t)*(w-t)+(e-y)*(e-y));
    return u;
}