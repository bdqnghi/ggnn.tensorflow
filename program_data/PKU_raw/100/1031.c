int main()
{
	char zfc[300];
	char stan;
	stan='a';
	scanf("%s",zfc);
	int k;
	k=strlen(zfc);
	int e=0;
	char out[300];
	int ab[300];
	int i;
	for(i=0;i<k;i++){
		if(zfc[i]=='a' || zfc[i]=='b' || zfc[i]=='c' || zfc[i]=='d' || zfc[i]=='e' || zfc[i]=='f' || zfc[i]=='g' || zfc[i]=='h' || zfc[i]=='i' || zfc[i]=='j' || zfc[i]=='k' || zfc[i]=='l' || zfc[i]=='m' || zfc[i]=='n' || zfc[i]=='o' || zfc[i]=='p' || zfc[i]=='q' || zfc[i]=='r' || zfc[i]=='s' || zfc[i]=='t' || zfc[i]=='u' || zfc[i]=='v' ||zfc[i]=='w' || zfc[i]=='x' || zfc[i]=='y' || zfc[i]=='z'){
			int a=0;
			int sum=1;
			for(int j=0;j<e;j++){
				if(zfc[i]==out[j]){
					a=1;
				}
			}
			if(a==0){
				out[e]=zfc[i];
				for(int t=i+1;t<k;t++){
					if(zfc[t]==zfc[i]){
						sum++;
					}
				}
				ab[e]=sum;
				e++;
			}
		}
	}
	if(e==0){
		printf("No");
	}
	char data;
	int x;
	for(i=0;i<e;i++){
		for(int j=i+1;j<e;j++){
			if(out[i]>out[j]){
				data=out[i];
				out[i]=out[j];
				out[j]=data;
				x=ab[i];
				ab[i]=ab[j];
				ab[j]=x;
			}
		}
	}
	for(i=0;i<e;i++){
		printf("%c=%d\n",out[i],ab[i]);
	}
	return 0;
}
