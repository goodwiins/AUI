#include <stdio.h>
#define NC 2
#define NS 3
void g_fill(float grades[NS][NC]){
    for(i=0;i<NS;i++){
        for(j=0;j<NC;j++){
            printf("element - [%d],[%d] : ",i,j);
            scanf("%d",&grades[i][j]);
        }
    }  
}
void w_fill(float weights[NC]){
    for(j=0;j<NC;j++){
        printf("element - [%d] : ",j);
        scanf("%d",&weights[j]);
    }

}
void wa_compute(float grades[NS][NC], float weights[NC], float wa[NS]){
    int i,j;
    float sum, wsum=0;
    for (i = 0; i < NC; i++){
        wsum+= weights[i];
    }
    for ( i = 0; i < NS; i++){
        sum=0;
        for ( j = 0; j < NC;j++){
           sum+= grades[i][j]*weights[j];
        }
        wa[i]=sum/wsum;
    }
}
void display