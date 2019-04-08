int main() {
    int a,b,n,i,c,d;
    scanf ("%d",&n);
    d=0;
    c=0;
    for (i=0;i<n;i++){
        scanf ("%d %d",&a,&b);
        if(a==0&&b==1){
            c++;
        }
        else if (a==0&&b==2){
            d++;
        }
        else if (a==1&&b==0){
            d++;
        }
        else if (a==1&&b==2){
            c++;
        }
        else if (a==2&&b==0){
            c++;
        }
        else if (a==2&&b==1){
            d++;
        }
        else {
            i=i;
        }
        
    }
   if (c>d){
       printf ("A");
   }
   else if (c<d){
       printf ("B");
   }
   else if (c==d){
       printf ("Tie");
    }
    return 0;
}

