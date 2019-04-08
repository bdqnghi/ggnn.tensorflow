
int main(){
	char str[301];
	scanf("%s", str);

	int array[26] = {0};

	int i = 0, j = 0;
	while(str[i] != '\0'){
		if((str[i] >= 'a') && (str[i] <= 'z')){
			array[str[i] - 'a'] += 1;
                        j++;
		}
		i++;
	}
       
        if( j == 0) printf("No\n");
	i = 0;
	char c = 'a';
	while( i < 26 ){
		if(array[i] != 0){
                        c = i + 'a';
			printf("%c=%d\n\n", c, array[i]);
		}
		i++;
	}
        return 0;
}
