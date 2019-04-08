int main()
{
		char a1[257*2],a2[257],b1[257];
		int i,j,k,start=0,end=0;
		gets(a1);
		gets(a2);
		gets(b1);
		for(i=0;a1[i]!=0;i++){
			if(a1[i]==a2[0]){
				for(j=i+1,k=1;a2[k]!=0;j++,k++){
					if(a1[j]!=a2[k]){
						break;
					}
				}
				if(a2[k]==0){
					start=i;
					end=j;
					break;
				}
			}
		}
		if(start<end){
				for(i=start,k=0;b1[k]!=0;i++,k++){
					a1[i]=b1[k];
				}
				for(j=end;a1[j]!=0;i++,j++){
					a1[i]=a1[j];
				}
				a1[i]=0;
		}
		printf(a1);
		return 0;
}
	
