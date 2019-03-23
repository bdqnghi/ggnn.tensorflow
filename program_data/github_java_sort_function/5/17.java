  public void start(Stage primaryStage) {
        System.out.println("Hello world");
        int[] myList = {2, 5, 9, 3, 12, 6};

        
        for (int i = 0; i < myList.length-1; i ++) {
            for (int j = 0; j < myList.length-1-i; j++){
                if(myList[j] > myList[j+1]){
                    int temp = myList[j+1];
                    myList[j+1] = myList[j];
                    myList[j] = temp;
                }
            }
        }
        for(int x = 0; x < myList.length; x++){
            System.out.println(myList[x]);
        }

    }