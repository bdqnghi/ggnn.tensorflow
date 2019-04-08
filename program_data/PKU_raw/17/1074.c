char a[150];int l,j;
void left(int i){
    int jj;
    /*
    cout << "left" << i << endl;
    for (int j = 0; j < l; j++) {
        cout << a[j];
    }
    cout << endl;*/
	if(i==l-1){a[i]='$';return;}
	for(jj=i+1;jj<l;jj++){
        //cout << "for jj=" << jj << endl;
		if(a[jj]==')'){
            a[jj]=' ';
            a[i]=' ';break;
		}
		else if(a[jj]=='('){left(jj);}
    }
    if (jj == l) {
        a[i] = '$';
    }
    //cout << "return" << endl;
	return;
}
void match(int i){//if(i==0){for(int k=0;k<l;k++)cout<<a[k];return;}
    /*cout << i << endl;
    for (int j = 0; j < l; j++) {
        cout << a[j];
    }
    cout << endl;*/
	if(i==l){
		for(int ii=0;ii<l;ii++){
			if(a[ii]=='('){a[ii]='$';}
			if(a[ii]==')'){a[ii]='?';}
		}
		return;
	}
	else{
		if(i==l-1&&a[i]=='('){a[i]='$';}
		if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z')){a[i]=' ';}
		else if(a[i]=='('){left(i);}
		match(i+1);
	}
}
int main(){
	while(cin >> a){
		l=strlen(a);for(int k=0;k<l;k++)cout<<a[k];cout<<endl;
		match(0);for(int k=0;k<l;k++)cout<<a[k];cout<<endl;
	}
	return 0;
}