# include<stdio.h>
int main(){
  int marks;
  printf("enter marks of five subjects :");
  scanf("%d", &marks);
  float per;
 per = (marks*100)/500;
printf("percentage is %f", per);
return 0;
}