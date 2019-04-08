int main(){
	int n;
	cin>>n;
	while(n!=0){
		n--;
		int x,i;
		cin>>x;
		if(x==0){
			cout<<60<<endl;
			continue;
		}
		int s[x];
		for(i=0;i<x;i++)
			cin>>s[i];
		if(s[x-1]+3*x<=60){
			cout<<60-3*x<<endl;
			continue;
		}
		else if(s[x-1]+3*x>60&&s[x-1]+3*x-3<=60){
			cout<<s[x-1]<<endl;
			continue;
		}
		else
		for(i=0;i<x;i++){
			if(s[i]+3*i+3>60){
				if(s[i]+3*i<=60){
					cout<<s[i]<<endl;
					break;
				}
				else{
					cout<<60-3*i<<endl;
					break;
				}
			}
		}
	}
	return 0;
}
