int cincd(char a[]){
	int num=0;
	for(int i=0;;i++){
		a[i]=getchar();
		if(a[i]=='\n')break;
		num++;
		}
		return num;
	}//???????? 
void coutt(char a[],int length){
	for(int i=0;i<length;i++){
		cout<<a[i];
		}
	}//???????? 
int main(){
	char a[100][20],b[100],c[100];
	int x=0,d[100],e,f,num=0;//d???????? ,e?f???b?c???,num????? 
	for(int j=0;;j++){
		a[x][j]=getchar();
		if(a[x][j]=='\n'){
			d[x]=j;
			num=x+1;
			break;
			}
		if(a[x][j]==' '){
			d[x]=j;
			x++;
			j=-1;
			}
		}//??a
		e=cincd(b);
		f=cincd(c);
		for(int i=0;i<num;i++){
			if(i!=0)cout<<" ";
			if(d[i]==e){
				int length=0;
			    for(int j=0;j<e;j++){
				    if(a[i][j]==b[j])length++;
				    }
				    if(length==e)coutt(c,f);//???????
						else coutt(a[i],d[i]);//????
							continue;
				}
				else coutt(a[i],d[i]);//????
			}
			
			return 0;
	}
