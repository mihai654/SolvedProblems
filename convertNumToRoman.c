
#include <stdio.h>

//convert a number to ROMAN characters number
int main()
{
   int num = 0;
   int saveNum = 0;  
   unsigned char romanChr[20] = {'\0'};
   int count = 0;
   printf("Insert the number: \n");
   scanf("%d", &num);
   //save number for further use
   saveNum = num;
   //decrease the number part by part until we reach 0
   while(num > 0){
       if(num - 1000 >= 0){
           romanChr[count++] = 'M';
           num-=1000;
       }else if(num - 900 >= 0){
          romanChr[count++] = 'D';
          romanChr[count++] = 'M';
           num-=900; 
       }else if(num - 500 >= 0){
          romanChr[count++] = 'D';
           num-=500; 
       }else if(num - 400 >= 0){
          romanChr[count++] = 'C';
          romanChr[count++] = 'D';
           num-=400; 
       }else if(num - 100 >= 0){
          romanChr[count++] = 'C';
           num-=100; 
       }else if(num - 90 >= 0){
          romanChr[count++] = 'X';
          romanChr[count++] = 'C';
           num-=90; 
       }else if(num - 50 >= 0){
          romanChr[count++] = 'L';
           num-=50; 
       }else if(num - 40 >= 0){
          romanChr[count++] = 'X';
          romanChr[count++] = 'L';
           num-=40; 
       }else if(num - 10 >= 0){
          romanChr[count++] = 'X';
           num-=10; 
       }else if(num - 9 >= 0){
          romanChr[count++] = 'I';
          romanChr[count++] = 'X';
           num-=9; 
       }else if(num - 5 >= 0){
          romanChr[count++] = 'V';
           num-=5; 
       }else if(num - 4 >= 0){
          romanChr[count++] = 'I';
          romanChr[count++] = 'V';
           num-=4; 
       }else if(num - 1 >= 0){
          romanChr[count++] = 'I';
           num-=1; 
       }
       
   }
   printf("%d in Roman characters is: \n", saveNum);
   for(int i=0; i<count; i++){
       printf("%c", romanChr[i]);
   }

    return 0;
}
