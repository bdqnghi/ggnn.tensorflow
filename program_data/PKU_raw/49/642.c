char s[510]; 
int num=0; 
int k=0; 
int len; 
struct Str{
	int start,end;
	int len; 
	}str[30010];  
void run(){
	int a=k;
	int b=num; 
	k=num; 
	int k1,k2; 
	for(int i=a;i<b;i++){
		k1= str[i].start-1; 
		k2= str[i].end+1; 
		if(k1>=0&&k2<len&&s[k1]==s[k2]){
			str[num].start=k1;
			str[num].end=k2;
			str[num++].len=k2-k1; 
			} 
		} 
	} 
int main(){ 
	cin>>s;
	len = strlen(s); 
	//??????? 
	for(int i=0;i<len-1;i++){
		if(s[i]==s[i+1]){ 
			str[num].start = i;
			str[num].end = i+1;
			str[num++].len = str[i].start-str[i].end;
			} 
		}
	k=0; 
	//????????????????????????? 
	while(k<num) run(); 
	for(int i=0;i<num;i++){
		for(int j=str[i].start;j<=str[i].end;j++){
			printf("%c",s[j]); 
			} 
		printf("\n"); 
		} 
	return 0;
	}
