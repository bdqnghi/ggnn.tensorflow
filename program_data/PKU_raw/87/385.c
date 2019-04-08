int main()
{
int n,i=1,a,b,c,d,e,f,s;
for(i=1;i>0;){
	for(n=0;;n++){
		scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
		if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0){
			i=0;break;}
		d=d+12;
		s=3600-b*60-c+(d-a-1)*3600+e*60+f;printf("%d\n",s);
	}
}

	return 0;
}