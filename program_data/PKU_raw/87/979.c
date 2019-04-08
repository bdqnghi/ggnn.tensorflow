int main()
{
	int i=0,h1[100],h2[100],m1[100],m2[100],s1[100],s2[100];
	while(1){
		scanf("%d%d%d%d%d%d",&h1[i],&m1[i],&s1[i],&h2[i],&m2[i],&s2[i]);
		if(h1[i]+h2[i]+m1[i]+m2[i]+s1[i]+s2[i]==0){
			break;
		}
		i++;
	}
	int n,add1,add2,cha;
	n=i;
	for(i=0;i<n;i++){
		h2[i]=h2[i]+12;
		add1=h1[i]*3600+m1[i]*60+s1[i];
		add2=h2[i]*3600+m2[i]*60+s2[i];
		cha=add2-add1;
		printf("%d\n",cha);
	}
	return 0;
}