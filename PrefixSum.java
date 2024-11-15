public class PrefixSum {
    public static void main(String[] args) {
        int arr[]={4,3,2,62,12,4,53};
        prefixSum(arr);
    }
    static void prefixSum(int arr[]){
        int i,sum=0;
        for(i=0;i<arr.length;i++){
            sum+=arr[i];
            System.out.println("PrefixSum: "+sum);
        }
    }
}
