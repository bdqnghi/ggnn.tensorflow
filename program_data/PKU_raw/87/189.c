int main()
{
	int a,b,c,d,e,f;
	int i,m,n,s;
	for(i=1;i++;){
		scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
		if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0){
			break;
		}else{
		    d=d+12;
            m=c+b*60+a*3600;
	        n=f+e*60+d*3600;
	        s=n-m;
		    printf("%d\n",s);
		}
	}
	return 0;
}
