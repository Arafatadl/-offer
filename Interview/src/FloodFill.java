import java.util.ArrayList;

public class FloodFill {
    private int memo[];
    private int way(int n){
        if(n==1||n==0)
            return 1;
        if(memo[n]==-1)
            memo[n]=way(n-1)+way(n-2);
        return memo[n];
    }
    public int JumpFloor(int target) {



        return way(target);

    }
}

