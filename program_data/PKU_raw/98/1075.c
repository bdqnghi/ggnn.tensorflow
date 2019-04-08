char in[1000][50]={0};
char out[1000][4000]={0};

int main ()
{
	int n;
	cin>>n;
	for (int i=1;i<=n;i++)
		cin>>*(in+i);
	int row = 0;
	for (int i=1;i<n;i++){
		if (strlen(*(out+row))+strlen(*(in+i)) <= 80){
			strcat(*(out+row),*(in+i));
			if (strlen(*(out+row))+strlen(*(in+i+1))+1 <= 80)
				strcat(*(out+row)," ");
			else row += 1;
		}
	}
	strcat(*(out+row),*(in+n));

	for (int i=0;i<=row;i++)
		cout<<*(out+i)<<endl;

	return 0;
}