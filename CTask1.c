#include<stdio.h>
int main(){
    char a,b,c;
    int vowel=0,consonant=0;
    printf("enter three character");
    a=getchar();
    getchar();
    b=getchar();
    getchar();
    c=getchar();
    getchar;
    
    switch(a){
        case 'a': 
           vowel++ ;
            break;
            case 'e': 
           vowel++ ;
            break;
        case 'i': 
           vowel++ ;
            break;
        case 'o': 
           vowel++ ;
            break;
        case 'u': 
           vowel++ ;
            break;
            default:
            consonant++;
    }
   
    
        switch(b){
        case 'a': 
           vowel++ ;
            break;
            case 'e': 
           vowel++ ;
            break;
        case 'i': 
           vowel++ ;
            break;
        case 'o': 
           vowel++ ;
            break;
        case 'u': 
           vowel++ ;
            break;
            default:
            consonant++;
        } 
   
       
    switch(c){
        case 'a': 
           vowel++ ;
            break;
            case 'e': 
           vowel++ ;
            break;
        case 'i': 
           vowel++ ;
            break;
        case 'o': 
           vowel++ ;
            break;
        case 'u': 
           vowel++ ;
            break;
            default:
            consonant++;
 }
   
    printf("vowel:%d\n",vowel);
    printf("consonant:%d",consonant);

    return 0;
}
