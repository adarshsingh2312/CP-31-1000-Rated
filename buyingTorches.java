import java.util.*;
public class buyingTorches{
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int t = scn.nextInt();
        while(t-- >0){
            long x,y,k;
            x = scn.nextLong();
            y = scn.nextLong();
            k = scn.nextLong();
            long factor = x-1;
            long needs = y*k -1 ;
            long stickTrades = needs / factor + (needs % factor != 0 ? 1 : 0);
            long coalTrades = k;
            long sticks = 1 + stickTrades*factor - y*k;
            if(sticks>=k){
                System.out.println(stickTrades+coalTrades);
            }
            else{
                needs = k- sticks;
                stickTrades += needs/factor + (needs %factor != 0 ? 1 : 0);
                System.out.println(stickTrades + coalTrades);
            }
        }
        scn.close();
    }
}