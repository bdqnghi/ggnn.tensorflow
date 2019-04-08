int main()
{
int t=0;
int n[300],m[300];
for(int i=0;i<300;i++){
	scanf("%d",&n[i]);	
	scanf("%d",&m[i]);
		t++;
	if(m[i]==0||n[i]==0){goto next;}
}
next:for(int k0=0;k0<t-1;k0++){
		int s[300]={0};
	int k1=n[k0];
	int j=1;
	for(int h=0;h<n[k0];h=(h+1)%n[k0])
	{
		if(s[h]){
			continue;
		}
		
		if(j++==m[k0])
		{
			s[h]=1;
			k1--;
			j=1;
		}
		if(k1==0){
			printf("%d\n",h+1);
			break;
		}
	}
}
return 0;
}
