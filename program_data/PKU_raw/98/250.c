int main(){
	char S1[41],S2[41];
	char *s1=NULL,*s2=NULL;
	int N,sum=0;
	cin>>N;
	cin>>S1;s1=S1;
	N=N-1;
	while(N>0){
		cin>>S2;
		s2=S2;
		int l1=strlen(S1),l2=strlen(S2);
		sum=sum+l1+1+l2;
		if(sum<=80){
			for(int i=0;i<l1;i++)
				cout<<*(s1+i);
			cout<<' ';
			sum=sum-l2;
			l1=l2;
			strcpy(S1,S2);
		}
		else {
			for(int i=0;i<l1;i++)
				cout<<*(s1+i);
			cout<<endl;
			sum=0;
			l1=l2;
			strcpy(S1,S2);
		}
		if(N==1)
			for(int i=0;i<l2;i++)
				cout<<*(s2+i);
		N--;
	}
	return 0;
}

