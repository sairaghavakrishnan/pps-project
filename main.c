//project for calculating body mass index
#include<stdio.h>
float BMI(float weight, float height) {
   return weight/height*2;}
int main(){
    FILE *fp;
    char user[30];
    char pass[50];
    fp=fopen("Body_mass_index.txt","w");
    
    printf("USERNAME:\n");
    scanf("%s",user);
    
    float weight,height;
    printf("Enter weight in kg:");
    scanf("%f",&weight);
    printf("Enter height in inches:");
    scanf("%f",&height);
    float bmi;
    bmi=BMI(weight,height);
    printf("YOUR BMI IS: %.2f\n",bmi);
    if(bmi<18.5)
    {
        printf("\nYour BMI belongs to class:UNDERWEIGHT");
    }
    else if(bmi>=18.5 && bmi<=24.9)
    {
        printf("Your BMI belongs to class:NORMAL WEIGHT\n");
        printf("YOU ARE DOING A GREAT JOB MAINTAINING YOUR BODY");
    }
    else if(bmi>=25.0 && bmi<=29.9)
    {
        printf("your BMI belongs to class:OVERWEIGHT");
    }
    else if(bmi>=30.0 && bmi<=34.9)
    {
        printf("your BMI belongs to class:OBESITY CLASS 1");
    }
    else if(bmi>=35.0 && bmi<=39.9)
    {
        printf("your BMI belongs to class:OBESITY CLASS 2");
    }
    else if(bmi>=40)
    {
        printf("your BMI belongs to class:OBESITY CLASS 3");
    }
    else
    printf("INVALID ENTRY \n TRY AGAIN");
    fprintf(fp,"$$@FREE BODY MASS INDEX CALCULATOR@$$\n");
    fprintf(fp,"EAT HEALTHY AND EXERCISE REGULARLY\n");
    fprintf(fp,"The body mass index of %s is ",user);
    fprintf(fp,"%.2f",bmi);
    fclose(fp);
    return 0;}
    
    

   







