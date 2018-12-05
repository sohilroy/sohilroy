#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//here the main class is created
//the code is developed for 
//finding the substring from the main string 
int main(){
// two character arrays are declared here
char a[1000],b[1000];
//here the main string is read
printf("enter the main string : ");
gets(a);
//the length of the string is found 
int l=strlen(a);
int sl;
//the substring length is taken here
printf("enter the length of the substrings you want : ");
scanf("%d",&sl);
int i;
int k=0,j;
//this is for user reference
printf("The substrings from the main string of order %d \n",sl);
//the main logic is found here
//two for loops are taken 
for(i=0;i<=l-sl;i++){
 // this loop is read so that  required length of the 
 // substring can be read 
 for(j=i;j<sl+i;j++){
  //the substring is assigned from the main string 
  b[k]=a[j];
  // the sub string is printed here
  printf("%c",b[k]);
  k++;
   }  
  // everytime this is made '0' so that sub string array starts from first index
  k=0;
  printf("\n"); 
  }
return 0;
}
