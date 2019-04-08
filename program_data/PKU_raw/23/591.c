//Yang Lingbo   1200017623


int main(){
	int i,j = 0,k = 0,len_total,count = 0;
	char str[100],word[15][10] = {'\0'};            //str????  word???
	gets(str);
	len_total = strlen(str);
	for(i = 0;i < len_total;i++){          //????
		if(str[i] != ' '){
			word[count][k++] = str[i];
		}
		else{
			k = 0;
			count++;
		}
	}

	//????,??count???????????1??????????count++????
	for(i = count;i >= 0;i--){         
		cout<<word[i];
		if(i)cout<<' ';
	}
	cout<<endl;
	return 0;
}
