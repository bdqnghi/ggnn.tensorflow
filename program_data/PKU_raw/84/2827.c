
 
main(){

int n,m,a,b,p;

scanf("%d",&n);

for(int i=1;i<=n;i++){

	scanf("%d",&m);

	if(i==1){a=m;


	}

	else if(i==2){

		b=m;
     
		if(b>=a){p=a;

       a=b;

	   b=p;

		}


	}

	else if(i>=3){


		if (m>a&&m>b){


			p=a;

			a=m;

			b=p;


		}

		else {

			if(m<a&&m>b){


				b=m;

			}






		}
   

	
	}
}



printf("%d\n%d\n",a,b);





	return 0;
	  

}