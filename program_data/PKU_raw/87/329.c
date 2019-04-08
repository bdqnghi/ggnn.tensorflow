int main()
{
    int a,b,c,d,e,f,s,x,sz[1000],i,t;
	scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
	i=0;
	while(a!=0||b!=0||c!=0||d!=0||e!=0||f!=0){
        s=a*3600+b*60+c;	
		x=43200+d*3600+e*60+f;
		sz[i]=x-s;
		i++;
        scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
	}
    for(t=0;t<i;t++){
		printf("%d\n",sz[t]);
	}
	return 0;
}