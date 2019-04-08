int main(){
	char string[101];//??????
	int i,j,lenth,n,t;
	while(cin.getline(string,101)){//??????????????
		n=0;
		lenth=strlen(string);//????
		cout<<string<<endl;//????????
		for(i=0;i<lenth;i++){//??????????????????????
			if(string[i]=='(')  string[i]='$';
			else if(string[i]==')')  string[i]='?';
			else{
				string[i]=' ';
				n++;
			}
		}
		n=(lenth-n)/2;//?????????????
        for(i=0;i<n;i++){//??
        	for(j=0;j<lenth;j++){
        		for(t=j+1;t<lenth;t++){
        			if(string[j]=='$'&&string[t]=='$'){
        			    j=t;
        			    continue;
        			}
        			if(string[j]=='$'&&string[t]=='?'){
        				string[j]=string[t]=' ';
        				j=t-1;
        			}
        		}
        	}
        }
        for(i=lenth-1;i>=0;i--){//??????
        	if(string[i]!=' ') break;
        }
        string[i+1]='\0';
        lenth=strlen(string);
        int m=0;
        for(i=0;i<lenth;i++){//??????
        	if(string[i]!=' ') break;
        	m++;
        }
        for(i=m;i<lenth;i++)
        	cout<<string[i];
        cout<<endl;
	}
	return 0;
}
