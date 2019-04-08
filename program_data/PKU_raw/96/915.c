int change(char a,char b){
	return 10*(a-'0')+(b-'0');
	}//??????? 
int shang(int x){
	for(int i=0;i<10;i++){
		if(i*13<=x && x<(i+1)*13)return i;
		}
	}//?????? 
void coutt(int b[],int num){
	for(int i=0;i<num;i++){
		cout<<b[i];
		}
		cout<<endl;
	}//???? 
int main(){ 
		char a[102]={'\0'};
		int c[102]={0};
		cin>>a;
		if(strlen(a)==1)cout<<0<<endl<<a[0]-'0';
		else if(strlen(a)==2 && change(a[0],a[1])<13)cout<<0<<endl<<change(a[0],a[1]);//????? 
		else{	
			int x=change(a[0],a[1]),yushu=0;
		    if(x<13){//?????13 
		    	x=x*10+a[2]-'0';
			    for(int i=0;i<strlen(a)-2;i++){
				    c[i]=shang(x);
				    if(i!=strlen(a)-3)x=(x-c[i]*13)*10+(a[i+3]-'0');
				    else yushu=x-c[i]*13;
				    }
				    coutt(c,strlen(a)-2);
			    }
			else {//???????13 
				for(int i=0;i<strlen(a)-1;i++){
					c[i]=shang(x);
					if(i!=strlen(a)-2)x=(x-c[i]*13)*10+(a[i+2]-'0');
					else yushu=x-c[i]*13;
					}
					coutt(c,strlen(a)-1);
				}
				cout<<yushu<<endl;
			}
		
		return 0;
	}
