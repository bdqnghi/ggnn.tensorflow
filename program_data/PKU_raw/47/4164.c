
void reverse(int* array, int len){
	int i = 0, j = len - 1;
	while( i < j ){
		int temp = array[i];
		array[i] = array[j];
		array[j] = temp;
		i++;
		j--;
	}
}

int main(){
	int len = 0;
	scanf("%d", &len);

	int * array = (int*)malloc(len * sizeof(int));
	int i = 0;
	while( i < len){
		scanf("%d", array + i);
		i++;
	}
	reverse(array, len);

	i = 0;
	while( i < len - 1 ){
		printf("%d ", array[i]);
		i++;
	}
        printf("%d", array[i]);

	return 0;
}
