#include <string>
#include <iostream>
#include <stdlib.h>
#include <string.h>

int inplace_remove(char *s){
    int count=0;
    int insert=0;
    int len=strlen(s);
    int i=0;
    for(i=0; i<len; i++){
        if(s[i] != 'a'){
            s[insert] = s[i];
            insert++; 
        }else{
            count++;
        } 
    }
    for(i=0; i<count; i++)
        s[len-count+i]=0;
    return 1;
}

char *remove(char *s){
    char  *new_s = (char *)malloc(strlen(s));
    int count=0;
    for(int i=0; i<strlen(s); i++){
        if(s[i]!='a'){
           new_s[count]=s[i];
           count++;
        } 
    }
    return new_s;
}

int main(){
    char s[20]="abcdefa";
    char *new_s;
    //inplace_remove(s);
    new_s = remove(s);
    for(int i=0; i<strlen(s); i++)
        printf("%c,\n", new_s[i]);
    free(new_s);
}
