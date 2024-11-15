public class DuplicatesRepeatingElements {
    public static void main(String args[]){
        int arr[]={3,2,62,62,62,12,12,4,53,4};
        duplicatesRepeatingElements(arr);
    }
    static void duplicatesRepeatingElements(int arr[]){
        int i,max=arr[1];
        for(i=0;i<arr.length;i++) if(arr[i]>max) max=arr[i];
        int occurences[]=new int[max+1];
        for(i=0;i<arr.length;i++) occurences[arr[i]]++;
        int numberofduplicates=0,maxoccurence=0,mostrepeating=0;
        for(i=0;i<occurences.length;i++){
            if(occurences[i]>1) numberofduplicates+=occurences[i]-1;
            if(occurences[i]>maxoccurence){
                maxoccurence=occurences[i];
                mostrepeating=i;
            }
        }
        System.out.println("Number of duplicates: "+numberofduplicates);
        System.out.println("Most repeating element: "+mostrepeating);
    }
}
