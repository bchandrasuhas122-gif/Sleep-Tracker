#include <stdio.h>

int main() {
    int i,hours,minutes;
    float sleep,Average,total=0;
    for(i=1;i<=7;i++){
        printf("Enter hours on Day %d: ",i);
        scanf("%f",&sleep);
        if(sleep<0 || sleep>24){
            printf("Invalid Input\nPlease enter correct value\n");
            --i;
            continue;
        }
        total+=sleep;
    }
    printf("%.2f is the total hours in the week\n",total);
    Average=total/7.00;
    hours=(int)Average;
    minutes=(int)(Average-hours)*60;
    printf("Your Average Sleep is %d hours and %d minutes per week\n",hours,minutes);
    if(Average<6){
        printf("Your average sleep is too low, Rest more for staying healthy.\n");
    }
    else if(Average>=6 && Average<7){
        printf("Your average sleep is decent but a little more could be used.\n");
    }
    else if(Average>=7 && Average<=9){
        printf("Your average sleep is healthy! Keep it up.\n");
    }
    else if(Average>9){
        printf("Your average sleep is a lot! Stay active Sleepy Head\n");
    }
	return 0;

}
