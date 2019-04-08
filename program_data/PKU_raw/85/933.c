int main(){
	int n,i=1,a;
	scanf ("%d",&n);
	for (i=1;i<=n;i++){
		char sz[21];
		scanf ("%s",sz);
		int j;
		if (sz[0]=='_'||(sz[0]<='z'&&sz[0]>='a')||(sz[0]<='Z'&&sz[0]>='A')){
			a=1;
			for (j=1;sz[j]!='\0';j++){
				if (!(sz[j]=='_'||(sz[j]<='z'&&sz[j]>='a')||(sz[j]<='Z'&&sz[j]>='A')||(sz[j]<='9'&&sz[j]>='0'))){
				    a=0;
					break;
				}
                else if (sz[j]=='_'||(sz[j]<='z'&&sz[j]>='a')||(sz[j]<='Z'&&sz[j]>='A')||(sz[j]<='9'&&sz[j]>='0')){
					a=1;
				}
			}
            if (a==1){
				printf ("yes\n");
			}
			if (a==0){
				printf ("no\n");
			}
		}
		else {
		printf ("no\n");
		}
	}
return 0;
}

