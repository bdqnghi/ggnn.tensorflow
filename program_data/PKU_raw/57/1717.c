int main ()
{
	char zfc[100][50],gaiguo[100][50];
	int n,l[100];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s",zfc[i]);
		l[i]=strlen(zfc[i]);
		if(zfc[i][l[i]-3]=='i' && zfc[i][l[i]-2]=='n' && zfc[i][l[i]-1]=='g'){
			strncpy(gaiguo[i],zfc[i],l[i]-3);
			
		}else if(zfc[i][l[i]-2]=='e' && zfc[i][l[i]-1]=='r'){
			strncpy(gaiguo[i],zfc[i],l[i]-2);
			
		}else if(zfc[i][l[i]-2]=='l' && zfc[i][l[i]-1]=='y'){
			strncpy(gaiguo[i],zfc[i],l[i]-2);
			
		}
	}
	for(int j=0;j<n;j++){
		printf("%s\n",gaiguo[j]);
	}
    return 0;
} 