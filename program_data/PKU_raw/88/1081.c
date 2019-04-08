int judge(char x){
	if(x>47&&x<58){return 1;}
	return 0;}
int main (){
	int i,all,count,start[30],end[30],p;
	char sen[31];
	gets(sen);
	all=strlen(sen);
	count=0;
	for(i=0;i<all-1;i++){
		if(i==0){if(judge(sen[i])){start[0]=0;count++;}}
		if(i!=0&&(!(judge(sen[i-1])))&&judge(sen[i])){start[count]=i;count++;}
		if(judge(sen[i])&&(!judge(sen[i+1]))){end[count-1]=i;}}
	if(judge(sen[all-2])&&judge(sen[all-1])){end[count-1]++;}
	if((!judge(sen[all-2])&&judge(sen[all-1]))){start[count]=all-1;end[count]=all-1;count++;}
	if(end[count-1]<0||end[count-1]>30){end[count-1]=all-1;}
	for(i=0;i<count;i++){


		for(p=start[i];p<=end[i];p++){printf("%c",sen[p]);}


		printf("\n");}	


return 0;}