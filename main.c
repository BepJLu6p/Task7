#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
int mass[6],res;
float d;


printf("\nEnter x1,y1,r1,x2,y2,r2: ");
for(int i = 0;i<6;i++){
    scanf("%d",&mass[i]);
}

d = sqrt((pow((mass[3] - mass[0]),2) + pow((mass[4] - mass[1]),2)));

if(d > (mass[2] + mass[5]) || d < fabs(mass[2] - mass[5])){
    res = 0;
}
if(d == (mass[2] + mass[5]) || d == fabs(mass[2] - mass[5])){
    res = 1;
}
if(d < (mass[2] + mass[5]) && d > fabs(mass[2] - mass[5])){
    res = 2;
}
else{
    res = -1;
}

printf("\nKilkist tochok peretuny: %d",res);


}


