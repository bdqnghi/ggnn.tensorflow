

int main(int argc, char* argv[])
{
	int n,i,a;
	char w[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",w);
		a=strlen(w);
		if(((w[a-1]=='r')&&(w[a-2]=='e'))||((w[a-1]=='y')&&(w[a-2]=='l'))){
			w[a-2]='\0';
			printf("%s\n",w);
		}
		else if((w[a-3]=='i')&&(w[a-2]=='n')&&(w[a-1]=='g')){
			w[a-3]='\0';
			printf("%s\n",w);
		}
	}
	
	return 0;
}



