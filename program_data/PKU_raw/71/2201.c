int main(){
	int n,i,flag[300],r[300];
	int year[300],m1[300],m2[300];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d %d",&year[i],&m1[i],&m2[i]);
		if(year[i]%4==0&&year[i]%100!=0||year[i]%400==0)
			flag[i]=1;
		else flag[i]=0;
		if(m1[i]==1)
			m1[i]=1;
		if(m1[i]==2)
			m1[i]=32;
		if(m1[i]==3)
			m1[i]=60;
		if(m1[i]==4)
			m1[i]=91;
		if(m1[i]==5)
			m1[i]=121;
		if(m1[i]==6)
			m1[i]=152;
		if(m1[i]==7)
			m1[i]=182;
		if(m1[i]==8)
			m1[i]=213;
		if(m1[i]==9)
			m1[i]=244;
		if(m1[i]==10)
			m1[i]=274;
		if(m1[i]==11)
			m1[i]=305;
		if(m1[i]==12)
			m1[i]=335;
		if(m2[i]==1)
			m2[i]=1;
		if(m2[i]==2)
			m2[i]=32;
		if(m2[i]==3)
			m2[i]=60;
		if(m2[i]==4)
			m2[i]=91;
		if(m2[i]==5)
			m2[i]=121;
		if(m2[i]==6)
			m2[i]=152;
		if(m2[i]==7)
			m2[i]=182;
		if(m2[i]==8)
			m2[i]=213;
		if(m2[i]==9)
			m2[i]=244;
		if(m2[i]==10)
			m2[i]=274;
		if(m2[i]==11)
			m2[i]=305;
		if(m2[i]==12)
			m2[i]=335;
	}
	for(i=0;i<n;i++){
		if(flag[i]==1){
			if(m1[i]>32)
				m1[i]++;
			if(m2[i]>32)
				m2[i]++;
		}
		if(m1[i]>m2[i]){
		    r[i]=m1[i]-m2[i];
		}
		else
			r[i]=m2[i]-m1[i];
		if(r[i]%7==0)
			  printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}

