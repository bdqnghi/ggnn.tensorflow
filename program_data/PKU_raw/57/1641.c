int main(int argc, char* argv[])
{
	int n, wlong;
	char word[32], *p;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%s", word);
		for(p=word; *p; p++);
		switch(*(p-1)){
		case 'r' : wlong=2; break;
		case 'y' : wlong=2; break;
        case 'g' : wlong=3; break;
		}
		*(p-wlong)='\0';
		printf("%s\n", word);
	}
	return 0;}