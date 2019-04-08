int main(){
    int sz[10];
    int i,q,s;//????????
	int j;//??????????
	for(j=0;;j++)
	{
		s=0;
	 for(i=0;i<6;i++){scanf("%d",&sz[i]);}
	 if(sz[0]==0&&sz[1]==0&&sz[2]==0&&sz[3]==0&&sz[4]==0&&sz[5]==0)
		break;//????????????
      s+=(sz[3]+12-sz[0])*3600+(sz[4]-sz[1])*60+(sz[5]-sz[2]); 
         printf("%d\n",s);//??????~~
    }
    
    return 0;
}
