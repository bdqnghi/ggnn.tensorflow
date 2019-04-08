int main(){
	int a,b,c,d,e,f,i,s=0;
	for(i=1;i<100;i++){
		s=0;
		scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
		if(a==b&&b==c&&c==d&&d==e&&e==f&&a==0){break;}
s=d*3600+e*60+f+(12-a-1)*3600+(60-b-1)*60+60-c;
printf("%d\n",s);
	}


return 0;
}