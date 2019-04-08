int main()
{
	int a,b,c,d,e,f,s1,s2,s3,s,i;
	for(i=0;i<100;i++){
	scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
	if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0){
	return 0;}
	if(d<12){
	d=d+12;}
	s1=(d-a-1)*60*60;
	s2=(60-b-1)*60+e*60;
	s3=60-c+f;
	s=s1+s2+s3;	
	
	printf("%d\n",s);

	}
	
	return 0;
	

}
