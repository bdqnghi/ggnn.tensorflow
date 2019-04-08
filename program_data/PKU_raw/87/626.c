int main (){
	int m[100],f[100],s[100],m1[100],f1[100],s1[100],i,j,k;
	for(i=0;i<100;i++){
		m[i]=0;
		f[i]=0;
		s[i]=0;
		m1[i]=0;f1[i]=0;s1[i]=0;
	}
	for(i=0;i<10;i++){
		scanf("%d %d %d %d %d %d",&(s[i]),&(f[i]),&(m[i]),&(s1[i]),&(f1[i]),&(m1[i]));
                  if(s[i]==0&&s1[i]==0&&f[i]==0&&f1[i]==0&&m[i]==0&m1[i]==0){
                   break;}
		s1[i]=s1[i]+12;
		j=(s1[i]-s[i])*3600+(f1[i]-f[i])*60+m1[i]-m[i];
		if(j!=0){
			printf("%d\n",j);
		}
	}


	
	
	
	
	
	
	return 0;
}