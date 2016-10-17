#include <stdio.h>

 int main()
{
    double height, distanceU, distanceD, fatigue;

    //Heigh == 0 ( akhir input )
    while(scanf("%lf %lf %lf %lf", &height, &distanceU, &distanceD, &fatigue)==4 && height!=0.0 && height!=0)
    {

        double initH = 0.0;
        double strr = distanceU*(fatigue/100);
        int day=0;
        
        while(1)
        {
            day++;

            if(distanceU>0){
            	initH = initH + distanceU;
            }

            
            distanceU = distanceU - strr;
            
            if(initH>height){
                break;
            }
            
            initH = initH - distanceD;
            
            if(initH<0){
                break;
            }
        
        }

        if(initH>=0){
            printf("success on day %d\n",day);
        }
        else{
            printf("failure on day %d\n",day);
        }

    }
    return 0;
}
