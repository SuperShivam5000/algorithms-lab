class SecondLargestSmallest {
    public static void main(String args[]){
        int arr[]={4,3,2,62,12,4,53};
        secondLargestSmallest(arr);
    }
    static void secondLargestSmallest(int arr[]){
        int i,j,c;
        for(i=0;i<arr.length;i++){
            for(j=i+1;j<arr.length;j++){
                if(arr[i]>arr[j]){
                    c=arr[i];
                    arr[i]=arr[j];
                    arr[j]=c;
                }
            }
        }
        int secondSmallest=arr[1];
        int secondLargest=arr[arr.length-2];
        System.out.println("Second Smallest: "+secondSmallest);
        System.out.println("Second Largest: "+secondLargest);
    }
}
