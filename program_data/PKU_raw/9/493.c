int main(){
	int age[N], n, i, k;
	char id[N][LEN];
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		scanf("%s %d", id[i], &(age[i]));
	}
int e; char e_id[10];
for(k = 1 ; k <= n; k++){
	for(i = 0; i < n- k; i++){
		if((age[i] <60&& age[i+1]>=60)||(age[i]>=60&&age[i+1]>=60&&age[i]<age[i+1])){
			e = age[i+1];
			strcpy(e_id, id[i+1]);
			age[i+1] = age[i];
			strcpy(id[i+1], id[i]);
			age[i] = e;
			strcpy(id[i], e_id);
		}
	}
}
	for(i = 0; i < n; i++){
		printf("%s\n", id[i]);
	}
	return 0;
}