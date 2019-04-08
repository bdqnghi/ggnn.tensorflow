int main() {
	char str[1000];
	gets(str);
	int len;
	len=strlen(str);
	int max=0,min=10000;
	int i;
	int lenth=0;
	for(i=0;i<len;i++){
		if (str[i]!=' '){
			lenth=lenth+1;
		}
		if (str[i]==' '){
			if (lenth>max){max=lenth;}
			if (lenth<min){min=lenth;}
			lenth=0;
		}

		if (str[i+1]=='\0'){
			if (lenth>max){max=lenth;}
			if (lenth<min){min=lenth;}
		}

	}

	//printf("%d",max);
	//printf("%d",min);

	lenth=0;
	int maxpostail;
	int minpostail;
	for(i=0;i<len;i++){
		if (str[i]!=' '){
			lenth=lenth+1;
		}
		if (str[i]==' '){
			if (lenth==max){maxpostail=i-1;break;}
			lenth=0;
		}

		if (str[i+1]=='\0'){
			if (lenth==max){maxpostail=i;break;}
		}

	}
	char maxlenword[100];
	for(i=0;i<=max-1;i++){
		maxlenword[i]=str[maxpostail-(max-1)+i];
	}
	maxlenword[max]='\0';
	puts(maxlenword);
lenth=0;

for(i=0;i<len;i++){
		if (str[i]!=' '){
			lenth=lenth+1;
		}
		if (str[i]==' '){
			if (lenth==min){minpostail=i-1;break;}
			lenth=0;
		}

		if (str[i+1]=='\0'){
			if (lenth==min){minpostail=i;break;}
		}

	}
	char minlenword[100];
	for(i=0;i<=min-1;i++){
		minlenword[i]=str[minpostail-(min-1)+i];
	}
	minlenword[min]='\0';
	puts(minlenword);


	return 0;
}