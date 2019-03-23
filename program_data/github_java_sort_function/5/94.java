public static int[] recursivebubble(int a[],int iterCounter){
        if(iterCounter==a.length-1){
            return a;
        }
        for(int j=0; j<a.length-iterCounter-1;j++){
            if(a[j]>a[j+1]){
                int swap = a[j];
                a[j] = a[j+1];
                a[j+1]= swap;
            }
        }
        return recursivebubble(a,iterCounter+1);
    }
