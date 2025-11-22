#include <stdio.h>
#include <string.h>
int main(){
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int len = strlen(str);
    int i;
    int newword=1;
    for(i=0;i<len;i++){
        if(str[i]==' ' || str[i]=='\n' || str[i]=='\t'){
            newword=1;
        }
        else if(newword==1){
            if(str[i]>='a' && str[i]<='z'){
                str[i]=str[i]-32; 
            }
            newword=0;
        }
        else{
            if(str[i]>='A' && str[i]<='Z'){
                str[i]=str[i]+32; 
            }
        }
    }
    printf("The string in sentence case is: %s", str);
    return 0;
}