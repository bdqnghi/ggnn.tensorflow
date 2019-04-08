int main()
{
	int sz[1000];
	int a,b,c,d,e,f,s,i;
	for(i=1;i<1000;i++){
		scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
		if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0){break;}
		sz[i]=(d+12-a)*3600+(e-b)*60+f-c;
		printf("%d\n",sz[i]);

s=s+1;	
	}
	



	return 0;
}
	
