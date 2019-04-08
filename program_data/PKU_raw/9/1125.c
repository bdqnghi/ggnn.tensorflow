int main(int argc, char* argv[])
{
	char id[100][100];
	int age[100];
	int n;
	int i,k;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",id[i]);
		scanf("%d",&age[i]);
	}


    int e;
    char t[13];

     
	 char id1[100][13];
	 int age1[100];
	 char id2[100][13];
	 int age2[100];
	 int x=0,y=0;

		for(i=0;i<n;i++){
		if(age[i]>=60){
			age1[x]=age[i];
			strcpy(id1[x],id[i]);
			x++;
		}
	
		if(age[i]<60){
			age2[y]=age[i];
			strcpy(id2[y],id[i]);
			y++;
		}
	}
	
     for(k=1;k<x;k++){
      for(i=0;i<x-k;i++){
		if(age1[i]<age1[i+1]){
			e=age1[i+1];
			age1[i+1]=age1[i];
			age1[i]=e;
              
			strcpy(t,id1[i+1]);
			strcpy(id1[i+1],id1[i]);
			strcpy(id1[i],t);

		}
	}
}

   for(i=0;i<x;i++){
		printf("%s\n",id1[i]);
	 
	}

   

 for(i=0;i<y;i++){
		printf("%s\n",id2[i]);
	 
	}


	return 0;
}



