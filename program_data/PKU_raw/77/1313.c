int main(){
	char a[110],c;
	int num=0,b[110];
	for(int i=0;;i++){
		cin.get(a[i]);
		if(i==0)c=a[i];
		if(a[i]=='\n')break;
		b[i]=i;
		num++;
		}										//?? 
		int boy[55],girl[55],s=0;
		for(int i=0;i<num/2;i++){
			for(int j=0;j<num-1-i*2;j++){
				if(a[j]!=a[j+1]&&a[j]==c){
					boy[s]=b[j];
					girl[s]=b[j+1];
					s++;						//?????? 
					for(int k=j+2;k<num;k++){
						a[k-2]=a[k];
						b[k-2]=b[k];
						}
					continue;
					}
				}
			}
			for(int i=0;i<num/2-1;i++){
				for(int j=0;j<num/2-1-i;j++){
					if(girl[j]>girl[j+1]){
						int p,q;
						p=boy[j];
						boy[j]=boy[j+1];
						boy[j+1]=p;
						q=girl[j];
						girl[j]=girl[j+1];
						girl[j+1]=q;
						}
					}
				}							//???? 
				for(int i=0;i<num/2;i++){
					cout<<boy[i]<<" "<<girl[i]<<endl;
					}
			
			return 0;
	} 

