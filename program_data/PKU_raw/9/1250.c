
int main()
{
	struct patient{
		char id[10];
		int age;
	}br[100];

	int n,i,j,mid,k;

	char s[10];

	scanf("%d",&n);

	for(i=0;i<n;i++){
		scanf("%s %d",&br[i].id,&br[i].age);
	   
	}

	for(k=0;k<n;k++){    
	    for(i=0;i<n;i++){
		    if(br[i].age>=60){
			    for(j=i+1;j<n;j++){
				    if(br[j].age>=60){
						if(br[j].age>br[i].age){
					        mid=br[i].age;
					        br[i].age=br[j].age;
					        br[j].age=mid;

					        strcpy(s,br[i].id);
					        strcpy(br[i].id,br[j].id);
					        strcpy(br[j].id,s);
						}
						break;	    
					}
				}
			}
		}
	}

	

	
	for(i=0;i<n;i++){
		if(br[i].age>=60){
			printf("%s\n",br[i].id);
		}
	}

	for(i=0;i<n;i++){
		if(br[i].age<60){
			printf("%s\n",br[i].id);
		}
	}

	
	return 0;
}

