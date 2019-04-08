int main(){
	char zfc[100], exc;
	int len, i;
	scanf("%s", zfc);
        len = strlen(zfc);
for(i = 0; i < len/2; i++){
	exc = zfc[i];
	zfc[i] = zfc[len-1-i];
	zfc[len-1-i] = exc;
}

printf("%s", zfc);

	return 0;
}
