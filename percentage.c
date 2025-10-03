#include<stdio.h>
int main (){
float sum,percentage,maths,physics,chemistry,english,biology;
printf("enter marks in maths:");
scanf("%f",&maths);

printf("enter marks in physics:");
scanf("%f",&english);

printf("enter marks in chemistry:");
scanf("%f",&chemistry);

printf("enter marks in english:");
scanf("%f",&english);

printf("enter marks in biology:");
scanf("%f",&biology);

sum=maths+physics+chemistry+english+biology;
percentage=(sum/500)*100;

printf("sum of total number=%f\n",sum);
printf("percentage obtained=%f\n",percentage);

return 0;
}