public class RotateRight {
    public static void main(String[] args) {
        int arr[]={4,3,2,62,12,4,53};
        rotateRight(arr,4);
    }
    static void rotateRight(int arr[],int p){
        int i;
        int temp=arr[p];
        for(i=p;i>0;i--){
            arr[i]=arr[i-1];
        }
        arr[0]=temp;
        for(i=0;i<arr.length;i++){
            System.out.println(arr[i]);
        }
    }
}
