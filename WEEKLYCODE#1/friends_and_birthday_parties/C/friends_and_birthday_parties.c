#include < stdio.h >
#include < string.h >
#include < string.h >
#define MAX_STRING_LENGHT 1001
int main(){

    char str[MAX_STRING_LENGHT];
    int i,lenght,count=0;
    //we take string as input
    scanf("%s",str);
    //calculating the length of the string
    lenght=strlen(str);
    //counting the number of commas(,) in the string
    for(i=0;i<lenght;i++){
        if(str[i]==','){
            count++;
        }
    }
    //printing answer
    printf("%d\n",count+1);
    return 0;
}
```
