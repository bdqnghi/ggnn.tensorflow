
int main(){
	char str[2000],s[200][200];
	gets(str);
	int len=strlen(str);
	int i=0,k=0,a[200],max=0,min=2000,min1,max1,j,l=0;
	while(i<len){
		if(str[i]!=' '){
			for(j=i;j<len&&str[j]!=' ';j++){
				s[k][l]=str[j];
				l++;
			}s[k][l]='\0';
			i=j+1;
			k++;
			l=0;
		}
		else i++;
	}
	for(i=0;i<k;i++){
		a[i]= strlen(s[i]);
		if(a[i]>max){max=a[i];max1=i;}
		if(a[i]<min){min=a[i];min1=i;}
	}
	printf("%s\n%s",s[max1],s[min1]);

	
	return 0;
}