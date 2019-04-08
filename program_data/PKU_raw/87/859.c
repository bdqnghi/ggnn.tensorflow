int main (){
    int a,b,c,d,e,f,x,y,r;
    a=1;
    while (a!=0){
            scanf ("%d%d%d",&a,&b,&c);
            scanf ("%d%d%d",&d,&e,&f);
        	x=a*3600+b*60+c;
        	y=12*3600+d*3600+e*60+f;
        	r=y-x;
            if (a!=0){
        	printf ("%d\n",r);
            }
    }
	return 0;
}

