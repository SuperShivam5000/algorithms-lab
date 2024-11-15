public class FrequencyOfDigits {
    public static void main(String[] args) {
        int n=1234346356;
        freq(n);
    }
    static void freq(int n){
        int i,r;
        int arr[]=new int[10];
        for(i=n;i>0;i/=10){
            r=i%10;
            arr[r]++;
        }
        for(i=0;i<10;i++){
            System.out.println("Frequency of " + i + " is "+ arr[i]);
        }
    }
}
