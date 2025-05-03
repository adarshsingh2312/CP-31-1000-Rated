import java.util.*;
public class bogosort{
    static void sort(ArrayList<Integer>a){
        for(int i=0; i<a.size()-1; i++){
            for(int j=i+1; j<a.size(); j++){
                if(a.get(i) < a.get(j)){
                    int temp = a.get(i);
                    a.set(i, a.get(j));
                    a.set(j, temp);
                }
            }
        }
        return;
    }
    public static void main(String[] args){
        Scanner scn = new Scanner(System.in);
        int t = scn.nextInt();
        while(t-- >0){
            int n = scn.nextInt();
            ArrayList<Integer>a = new ArrayList<>();
            for(int i=0; i<n; i++){
                int x = scn.nextInt();
                a.add(x);
            }
            sort(a);
            for(int i=0; i<a.size(); i++){
                System.out.print(a.get(i)+" ");
            }
            System.out.println();
        }
        scn.close();
    }
}
