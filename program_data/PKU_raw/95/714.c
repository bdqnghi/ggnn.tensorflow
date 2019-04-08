int main(){
    char c1[80],c2[80];
    int i,a,b;
    cin.getline(c1,80);
    cin.getline(c2,80);
    a=strlen(c1);
    b=strlen(c2);
    for(i=0;i<=a-1;i++){
    	if((c1[i]>='A')&&(c1[i]<='Z')) c1[i]+=32;
    }
    for(i=0;i<=b-1;i++){
    	if((c2[i]>='A')&&(c2[i]<='Z')) c2[i]+=32;
    }
    if(a<=b) {
    	for(i=0;i<=a-1;i++){
    		if(c1[i]<c2[i]) {
    			cout<<'<';
    			break;
    		}
    		else if(c1[i]>c2[i]) {
    			cout<<'>';
    			break;
    		}
    		else if((i==a-1)&&(a==b)) cout<<'=';

    		else if(i==a-1) cout<<'<';
    	}
    }
    else {
    	for(i=0;i<=b-1;i++){
    		if(c1[i]<c2[i]) {
    			cout<<'<';
    			break;
    		}
    		    		else if(c1[i]>c2[i]) {
    		    			cout<<'>';
    		    			break;
    		    		}
    		    		else if(i==b-1) cout<<'>';
    	}
    }
	return 0;                                //?????
}
