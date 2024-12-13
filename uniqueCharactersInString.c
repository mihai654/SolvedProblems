

#include <stdio.h>
#define STR_LEN   20u
//check for how many unique characters are in the string 
int main()
{
    unsigned char arr[STR_LEN];
    unsigned char copyArr[STR_LEN] = {'\0'};
    unsigned int flag=0;
    unsigned int count = 0;
    printf("please insert a string:\n");
    scanf("%s", arr);
    for(int i=0; ((arr[i] != '\0') && (i<STR_LEN)); i++){
        flag = 0;
        for(int j=0; j<count+1; j++){
            if (arr[i] == copyArr[j]){
                flag = 1;
            }
        }
        if (flag == 0){
            copyArr[count++] = arr[i];
            
        }
    }
    printf("There are %d unique characters:\n ", count);
    for(int i=0; ((copyArr[i] != '\0') && (i<STR_LEN)); i++){
        printf("%c ", copyArr[i]);
    }



    return 0;
}
