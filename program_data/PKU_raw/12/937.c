
int main(int argc, char* argv[])
{
	int i,j,k,sz[17],n=0;
	for(i=0;i<17;i++){
		scanf("%d",&sz[i]);
		if(sz[i]==-1)
			break;
		else{
			if(i>0){
				if(sz[i]>0){
				for(j=0;j<i;j++){
					if(2*sz[j]==sz[i]||2*sz[i]==sz[j]){
						n++;
					}
				}
				}
				else{
					printf("%d\n",n);
					n=0;
					i=0;
					j=0;
					for(k=0;k<16;k++)
						sz[k]=-2;
				}
			}
		}
	}
	return 0;
}