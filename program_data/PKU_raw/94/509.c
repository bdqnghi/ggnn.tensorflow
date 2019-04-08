
int main()

{

int a[500];

int i,N;

scanf("%d",&N);

for(i=0;i<N;i++){

         scanf("%d",&a[i]);

}

int b[500];

int j=0;

for(i=0;i<N;i++){

         if(a[i]%2!=0){

                   b[j]=a[i];

                   j++;

         }if(a[i]%2==0){

                   j=j;

         }

 

}

int k,t;

for(k=0;k<j-1;k++){

         for(i=0;i<j-1-k;i++){

                   if(b[i]>b[i+1]){

                            t=b[i];

                       b[i]=b[i+1];

                            b[i+1]=t;

                   }

         }

}for(i=0;i<j-1;i++){

         printf("%d,",b[i]);

}

 

printf("%d",b[j-1]);

 

    return 0;

}

