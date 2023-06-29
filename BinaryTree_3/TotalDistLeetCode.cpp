class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
       

        if(mainTank<5 || additionalTank==0)
        return 10*mainTank;


        mainTank=mainTank-5;
        int ans=10*5+distanceTraveled(mainTank+1,additionalTank-1);
        

        return ans;
        
    }
};