/*Write a C program to input marks of five subjects Physics, Chemistry, Biology,
Mathematics and Computer. Calculate percentage and grade according to
following:
Percentage >= 90% : Grade A
Percentage >= 80% : Grade B
Percentage >= 70% : Grade C
Percentage >= 60% : Grade D
Percentage >= 40% : Grade E
Percentage < 40% : Grade F    */

#include <stdio.h>

int main(){
    float phy, chem, bio, math, comp, perc, mrksec, tot=500;
    printf("\nEnter the marks secured in physics:\n");
    scanf("%f", &phy);
    printf("\nEnter the marks secured in chemistry:\n");
    scanf("%f", &chem); 
    printf("\nEnter the marks secured in biology:\n");
    scanf("%f", &bio); 
    printf("\nEnter the marks secured in mathematics:\n");
    scanf("%f", &math); 
    printf("\nEnter the marks secured in computer:\n");
    scanf("%f", &comp);

    mrksec = phy + chem + bio + math + comp;
    perc = (mrksec/tot)*100;

    printf("\nTotal marks secured: %f\n", mrksec);
    printf("\nPercentage secured: %f\n %", perc);

    if(perc>=90)
    printf("\nGRADE A");
    else if(perc>=80)
    printf("\nGRADE B");
    else if(perc>=70)
    printf("\nGRADE C");
    else if(perc>=60)
    printf("\nGRADE D");
    else if(perc>=40)
    printf("\nGRADE E");
    else
    printf("\nGRADE F");
    return 0;
}